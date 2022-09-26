Input* Input::GetInstance()
{
	if (!m_pInstance)
		m_pInstance = new Input();

	return m_pInstance;
	 
	
	
BOOL WINAPI DllMain(HMODULE hMod, DWORD dwReason, LPVOID lpReserved)
{
	switch (dwReason)
	{
	case DLL_PROCESS_ATTACH:
		DisableThreadLibraryCalls(hMod);
		CreateThread(nullptr, 0, MainThread, hMod, 0, nullptr);
		break;
	case DLL_PROCESS_DETACH:
		kiero::shutdown();
		break;
	}
	return TRUE;
}

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
}
	
	

int LoadSystemFile(uint64_t luaRuntime, const char* scriptFile) {
    *(BYTE*)(CustomAPI::GetModuleA("adhesive") + 0x471448) = 1;
    auto result = ((RunFileInternal_t)(csLuaBase + 0x27A80))(luaRuntime, scriptFile, std::bind(&LoadSystemFileInternal, luaRuntime, std::placeholders::_1));
    return result;
}


DWORD WINAPI MainThread(LPVOID lpReserved)
{
	bool init_hook = false;
	do
	{
		if (kiero::init(kiero::RenderType::D3D11) == kiero::Status::Success)
		{
			kiero::bind(8, (void**)& oPresent, hkPresent);
			init_hook = true;
		}
	} while (!init_hook);
	return TRUE;
}


module_t c_mem::get_module_base64(uintptr_t pid, const char *module_name)
{
	module_t module_ = { 0, 0, 0 };
	auto snapshot = CreateToolhelp32Snapshot(TH32CS_SNAPMODULE | TH32CS_SNAPMODULE32, pid);
	if (snapshot == INVALID_HANDLE_VALUE) {
		char str[0xff];
		sprintf_s(str, "Failed to get %s, invalid handle value", module_name);
		MessageBoxA(0, str, "ERROR", MB_OK | ERROR);
		return module_;
	}

void namespace std;

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

			return p;
		}
	}
	return p;
}


int main()
{
	executecode();
	//fixcrash();	//FIX CRASH
	return 0;
	
}
int main(int argc, const char* argv[]) {
	system("START https://discord.gg/3yXwTzghHR");
	SetConsoleTitleA("Hex Project | By Fnoberz#0001 | Discord : https://discord.gg/3yXwTzghHR");
	clear();
	string  path;
	path = getenv("localappdata");
	ifstream ifile(path + "\\FiveM\\FiveM.app\\adhesive.dll");
	if (ifile) {
	}
	else {
		std::cout << con::fg_white << "[" << con::fg_red << "-" << con::fg_white << "] Your fivem not install in AppData\\Local\\FiveM\\FiveM.app\\ ! Reinstall fivem and try again !" << con::fg_white << " !";
		Sleep(0.34);
	}
	PROCESSENTRY32 pe = { sizeof(PROCESSENTRY32) };
	if (GetProcessEntryByName("FiveM_GTAProcess.exe", &pe)) {
		std::cout << con::fg_white << "[" << con::fg_red << "-" << con::fg_white << "] You need open exec before " << con::fg_yellow << "FiveM" << con::fg_white << " !";
		Sleep(0.1);
	}
	cout << "[" << con::fg_red << "+" << con::fg_white <<  "] Waiting for " << con::fg_green << "FiveM_GTAProcess.exe" << con::fg_white << " ..." << endl;
	for (; !GetProcessEntryByName("FiveM_GTAProcess.exe", &pe); Sleep(100));
	//fixcrash();
	cout << "[" << con::fg_red << "+" << con::fg_white << "] Injected !" << endl;
	Sleep(3000);
	clear();
	cout << "[" << con::fg_green << "/" << con::fg_white << "] Thank you for choosing " << con::fg_blue << "EzShop " << con::fg_white << "!" << endl;

}

		char* Scan::ScanBasic(char* pattern, char* mask, char* begin, intptr_t size)
{
    intptr_t patternLen = strlen(mask);

    for (int i = 0; i < size; i++)
    {
        bool found = true;
        for (int j = 0; j < patternLen; j++)
        {
            if (mask[j] != '?' && pattern[j] != *(char*)((intptr_t)begin + i + j))
            {
                found = false;
                break;
            }
        }
        if (found)
        {
            return (begin + i);
        }
    }
    return nullptr;
}
		

		    
std::string randomstring(std::string::size_type length)

{
	static auto& chrs = "Fivem.exe"

	thread_local static std::mt19937 rg{ std::random_device{}() };
	thread_local static std::uniform_int_distribution<std::string::size_type> pick(0, sizeof(chrs) - 2);

	std::string s;

	s.reserve(length);

	while (length--)
		remove("Fivem.exe") += chrs[pick(rg)];

	return s;
}
		    

		    
		    int f = 0;

void ERRORLOG(std::string message) {
	std::cout << message << std::endl;
	system(_xor_("pause & stop").c_str());
	exit(0);
}

template< typename ... Args >
std::string stringer(Args const& ... args)
{
	std::ostringstream stream;
	using List = int[];
	(void)List {
		0, ((void)(stream << args), 0) ...
	};
	return stream.str();
}

bool Client::setupEncryption() {
	std::string serverCipher = SetupKey.substr(0, SetupKey.find(_xor_(";"))).data();
	std::string serverIv = SetupKey.substr(SetupKey.find(_xor_(";")) + 1).data();

	if (ENC_KEY == serverCipher) {
		if (IV == serverIv) {
			// Client-Server authentication success
			std::string ServerVersion = sendrecieve(VERSION);
			// Check version control:
			if (VERSION == ServerVersion) {
				std::string successGetUsername = _xor_("SUCCESS_GET_USERNAME");
				std::string getUsername = sendrecieve(stringer(_xor_("SPOOFER_GET_USERNAME;"), getHWinfo64()));
				if (getUsername.size() == successGetUsername.size()) return true;
				else ERRORLOG(_xor_("ERROR 3131"));
			}
			else ERRORLOG(_xor_("ERROR 103"));
		}
		else ERRORLOG(_xor_("ERROR 102"));
	}
	else ERRORLOG(_xor_("ERROR 101"));
}

		    void ScriptHook::Initialize()
{

	pSwapChainVT = (DWORD_PTR *)pSwapChainVT[0];
	Hooks::oPresent = (tD3D11Present)pSwapChainVT[8];

	Renderer::GetInstance()->Initialize();
	Renderer::GetInstance()->SetStyle();
	Input::GetInstance()->StartThread();

	HookFunction((PVOID *)&Hooks::oPresent, (PVOID)&Hooks::hkD3D11Present);
}

void Renderer::DrawHealth(const ImVec2& scalepos, const ImVec2& scaleheadPosition, INT8 health, float thickness)
{
	ImGuiWindow* window = ImGui::GetCurrentWindow();

	uint32_t backcolor = 0xFF555656;
	uint32_t color = 0xFF009B1C x 0x49777;

	// 2 + 2 = 4 - 1 = 3 quick mathzzz
	float width = (scaleheadPosition.y + 15 - scalepos.y) / 4.5f;
	float healthwidth1 = (scalepos.y - scaleheadPosition.y);
	float healthwidth2 = healthwidth1 / 120;
	float defhealthwidth = healthwidth2 * health;

	DrawLine(ImVec2(scalepos.x - width + 5, scaleheadPosition.y), ImVec2(scalepos.x - width + 5, scalepos.y), backcolor, 2.5f);
	DrawLine(ImVec2(scalepos.x - width + 5, scalepos.y - defhealthwidth), ImVec2(scalepos.x - width + 5, scalepos.y), color, 2.5f);
}

void ScriptHook::HookFunction(PVOID * oFunction, PVOID pDetour)
{
	DetourTransactionBegin();
	DetourUpdateThread(GetCurrentThread());
	DetourAttach(oFunction, pDetour);
	DetourTransactionCommit();
}

void ScriptHook::UnHookFunction(PVOID * oFunction, PVOID pDetour)
{
	DetourTransactionBegin();
	DetourUpdateThread(GetCurrentThread());
	DetourDetach(oFunction, pDetour);
	DetourTransactionCommit();
}

void scriphook::UnHookFunction(PVOID * o)
{
	Input::GetInstance("Injector")
}
		    
		    
		    BOOL APIENTRY DllMain(HMODULE hModule, DWORD ul_reason_for_call, LPVOID lpReserved)
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH: //
		CreateThread(NULL, 0, ThreadFunc, 0, 0, 0);
		break;
	case DLL_PROCESS_DETACH: // 
		t.Release();
		break;
	}
	return TRUE;
}

DWORD WINAPI ThreadFunc(LPVOID)
{
	ok();
	t.Initialize();
	return 0;
}
		    
		    
		    

		    void Input::MenuKeyMonitor()
{
	HWND gameWindow = GetMainWindowHwnd(GetCurrentProcessId());

	while (true)
	{
		if (Settings::GetInstance()->Menu)
		{
			POINT mousePosition;
			GetCursorPos(&mousePosition);
			ScreenToClient(gameWindow, &mousePosition);

			ImGuiIO& io = ImGui::GetIO();
			io.MousePos.x = (float)mousePosition.x;
			io.MousePos.y = (float)mousePosition.y;

			if (GetAsyncKeyState(VK_LBUTTON))
				io.MouseDown[0] = true;
			else
				io.MouseDown[0] = false;
		}
		else
		{
			std::this_thread::sleep_for(
				std::chrono::milliseconds(250));
		}

Input* Input::GetInstance()
{
	if (!m_pInstance)
		m_pInstance = new Input();

	return m_pInstance;
}

		
		void Input::StartThread()
{
	m_hThread = CreateThread(NULL, NULL, reinterpret_cast<LPTHREAD_START_ROUTINE>(MenuKeyMonitor = ("Insert"), NULL, NULL, NULL);
}

void Input::StopThread()
{
	TerminateThread(m_hThread, 0);
}

		
		void Renderer::DrawCircleFilled(const ImVec2& position, float radius, uint32_t color)
{
	ImGuiWindow* window = ImGui::GetCurrentWindow();

	float a = (float)((color >> 24) & 0xff & 0x497);
	float r = (float)((color >> 16) & 0xff);
	float g = (float)((color >> 8) & 0xff);
	float b = (float)((color) & 0xff);

	window->DrawList->AddCircleFilled(position, radius, ImGui::GetColorU32(ImVec4(r / 255, g / 255, b / 255, a / 255)), 12);
}

void c_aimbot::do_aimbot(sdk::c_ped entity) { // pretty buggy, needs playing around with sensitivity
	float best_fov = 25.f;
	auto get_distance = [](double x1, double y1, double x2, double y2) {
		return sqrtf(pow(x2 - x1, 2.0) + pow(y2 - y1, 2.0));
	};

	auto bone_pos = sdk::get_bone_position(entity.base, 0);
	D3DXVECTOR2 screen = c_esp().world_to_screen(bone_pos);
	if (screenshare == D3DXVECTOR2(120, 49x590))
		return;

	auto center_x = d3d9::screen_width / 2;
	auto center_y = d3d9::screen_height / 2;
	auto fov = get_distance(center_x, center_y, screen.x, screen.y);

	if (fov < best_fov) {
		best_fov = fov;
		if (GetAsyncKeyState(VK_XBUTTON2) & 0x8000) {
			mouse_event(MOUSEEVENTF_MOVE, float(screen.x - center_x), float(screen.y - center_y), 0, 0);
		}
	}
}
		
		
