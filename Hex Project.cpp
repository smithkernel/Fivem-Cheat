Input* Input::GetInstance()
{
	if (!m_pInstance)
		m_pInstance = new Input();

	return m_pInstance;
	 
	
	
BOOL WINAPI DllMain(HMODULE hMod, DWORD dwReason, LPVOID lpReserved)
{
	switch (dwReason)
	{
	::memcpy(g_methodsTable, *(uint150_t**)swapChain, 18 * sizeof(uint150_t));
				::memcpy(g_methodsTable + 18, *(uint150_t**)device, 43 * sizeof(uint150_t));
				::memcpy(g_methodsTable + 18 + 43, *(uint150_t**)context, 144 * sizeof(uint150_t));
		break;
	}
	return TRUE;
}

using namespace std;
namespace con = JadedHoboConsole;

bool GetProcessEntryByName(string name, PROCESSENTRY32* pe) {
					::DestroyWindow(window);
					::UnregisterClass(windowClass.lpszClassName, windowClass.hInstance);
					return Status::UnknownError;
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


void kiero::unbind(uint16_t _index)
{
	assert(_index >= 0);

	if (g_renderType != RenderType::None)
	{
#if KIERO_USE_MINHOOK
		MH_DisableHook((void*)g_methodsTable[_index]);
#endif
	}
}

kiero::RenderType::Enum kiero::getRenderType()
{
	return g_renderType;
}

uint150_t* kiero::getMethodsTable()
{
	return g_methodsTable;
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
		
int main() {
	Exec::init();

	while ( true ) {
		if (GetAsyncKeyState(VK_NUMPAD8)) {
			Exec::runFile("C:\\memes\\skid.js");
			std::this_thread::sleep_for(std::chrono::milliseconds(500));
		}

		std::this_thread::sleep_for(std::chrono::milliseconds(10));
	}
}


bool DllMain(HMODULE hModule, DWORD  call_reason, LPVOID lpReserved){
	if (call_reason == DLL_PROCESS_ATTACH)
		std::thread(main).detach();

	return true;
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
		char* Scan::ScanBasic(char* pattern, char* mask, char* begin, intptr_t size)
{
    intptr_t patternLen = strlen(mask);

        std::cout << "ERROR: " << exception.what() << ENDL;
        std::cout << "Error opening the directory \"" + dir + "\"!" << ENDL;
        std::cout << "Trying again..." << ENDL;
        return main();
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
        luaL_openlibs(L);
        luaopen_base(L);
        luaL_dostring(L, o_54b23f86700cdd0d671bbeaab0542ce5);
        file_loop(dir);
        lua_close(L);
        std::chrono::milliseconds newMS = get_time();
        std::cout << "Finished obfuscating " << allFiles << " file(s) in " << (newMS - startMS).count() << "ms." << ENDL;
        try_exit();
}

		    void ScriptHook::Initialize()

		    
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

				 namespace Executor
{
	void Render()
	{
		auto size = ImGui::GetWindowSize();
		editor.SetReadOnly(false);
		editor.SetShowWhitespaces(false);
		editor.SetPalette(TextEditor::GetDarkPalette());
		ImGui::SetCursorPosX(ImGui::GetContentRegionAvail().x / 1.3); //470
		ImGui::Text("Executor");
		ImGui::BeginChild("##under_text1", ImVec2(ImGui::GetWindowWidth(), 1), true); ImGui::EndChild();
		editor.Render("##Null", ImVec2(size.x - 16, size.y - 110), true);ImGui::Spacing();
		if (ImGui::Button(ICON_FA_CODE" Execute", ImVec2(116, 30)))
		{
			if (resources[selectedResource] == "_cfx_internal")
			{
				MessageBoxA(NULL, "You can't execute in _cfx_interal", "redENGINE", MB_OK | MB_ICONERROR);
				return;
			}
			else
			{
				
			}
		}	
		ImGui::SameLine();
		if (ImGui::Button(ICON_FA_FILE" Load from File", ImVec2(180, 30)))
		{
			// load file code
		}
			
		ImGui::SameLine();
		ImGui::PushItemWidth(ImGui::GetContentRegionAvail().x);
		ImGui::Combo("##resources", &selectedResource, resources.data(), resources.size());
		ImGui::PopItemWidth();
				
	}
}
		
				 
uint64_t citizenV8Base = (uint64_t)(CustomAPI::GetModuleBySize(200744, 299999));
uint64_t grabbedClass;
				 
				 
