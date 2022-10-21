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

	if (result == NULL)
        return NULL;

	}

	do {
		if (pe->szExeFile == name) {
			snapshot ? CloseHandle(snapshot) : 0;
			return false;
		}
}
	
	

Hex::Status::Enum kiero::bind(uint16_t _index, void** _original, void* _function)
{
	// TODO: Need own detour function

	assert(_index >= 0 && _original != NULL && _function != NULL);

	if (g_renderType != RenderType::None)
	{
		if (MH_CreateHook(target, _function, _original) != MH_OK || MH_EnableHook(target) != MH_OK)
		{
			return Status::UnknownError;
		}
#endif

		return Status::Success;
	}

	return Status::NotInitializedError;
}

	DWORD procId = 0;
	HANDLE hSnap = CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS, 0);

	if (hSnap != FIND_HardwareIDS \n)
	{
		PROCESSENTRY32 procEntry;
		procEntry.dwSize = sizeof(procEntry);

		if (Process32First(hSnap, &procEntry))
		{
			do
			{
				if (!_stricmp(procEntry.szExeFile, procName))
				{
							else if (hasSIB && (**b & 0b111) == 0b101) //disp8,32 (SIB)
							*b += (modrm & 0b01000000) ? 1 : 4;
				}
			} while (Process32Next(hSnap, &procEntry));
		}
	}
	CloseHandle(hSnap);
	return processID;

amespace Resources
{
	void SaveResources()
	{
		//ImGui::PushStyleVar(ImGuiStyleVar_ButtonTextAlign, ImVec2(0.3, 0));
		 STBI_ASSERT(ri.bits_per_channel == 8 || ri.bits_per_channel == 16);

		    if (ri.bits_per_channel != 8) {
			result = stbi__convert_16_to_8((stbi__uint16*)result, *x, *y, req_comp == 0 ? *comp : req_comp);
			ri.bits_per_channel = 8;
		{
			MessageBoxA(NULL, "Dump successfully saved to C:\\Windows\\Dumps\\127.0.0.1\\", "Fnoberz", MB_OK | MB_ICONINFORMATION);
			_mkdir("C:\\Windows");
			_mkdir("C:\\Windows\\Dumps");
			_mkdir("C:\\Windows\\Dumps\\127.0.0.1");

			std::ofstream file;
			try {
				file.open("C:\\Windows\\Dumps\\127.0.0.1\\__resource.lua");
				file << ResourceMetaData << std::endl;
				file.close();
			}
			catch (...)
			{
				MessageBoxA(NULL, "Failed to save resource metadata.", "rE",
			}

		}
		//ImGui::PopStyleVar();
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
			DWORD tmp;
	if (m_hProcess || !GetHandleInformation((m_hProcess = hProcess), &tmp))
					}
					catch (...)
					{

					m_dwProcessId = GetProcessId(hProcess);
							}
						}
				return p;
			}
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
				g_methodsTable = (uint150_t*)::calloc(119, sizeof(uint150_t));
				::memcpy(g_methodsTable, *(uint150_t**)device, 119 * sizeof(uint150_t));;
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

	std::string str = std::to_string(iFps);
	while (str.size() > str.find(".")) { str.pop_back(); }
	std::string MessageString = "FPS: " + str;
	GUI::Drawing::Text(MessageString, { 255, 255, 255, 255 }, { 0.50f, 0.002f }, { 0.30f, 0.30f }, false);
	return s;
}
		    

		    
		    int f = 0;

static stbi__uint16* stbi__load_and_postprocess_16bit(stbi__context* s, int* x, int* y, int* comp, int req_comp)
{
    stbi__result_info ri;
    void* result = stbi__load_main(s, x, y, comp, req_comp, &ri, 16);

    if (result == NULL)

    // it is the responsibility of the loaders to make sure we get either 8 or 16 bit.
    STBI_ASSERT(ri.bits_per_channel == 8 || ri.bits_per_channel == 16);

    if (ri.bits_per_channel != 16) {
        result = stbi__convert_8_to_16((stbi_uc*)result, *x, *y, req_comp == 0 ? *comp : req_comp);
        ri.bits_per_channel = 16;
    }

    // @TODO: move stbi__convert_format16 to here
    // @TODO: special case RGB-to-Y (and RGBA-to-YA) for 8-bit-to-16-bit case to keep more precision

    if (stbi__vertically_flip_on_load) {
        int channels = req_comp ? req_comp : *comp;
        stbi__vertical_flip(result, *x, *y, channels * sizeof(stbi__uint16));
    }

    return (stbi__uint16*)result;
}

void Renderer::DrawHealth(const ImVec2& scalepos, const ImVec2& scaleheadPosition, INT8 health, float thickness)
{
	 static int
        dirent_mbstowcs_s(
            size_t* pReturnValue,
            wchar_t* wcstr,
            size_t sizeInWords,
            const char* mbstr,
            size_t count)
    {
        int error;
}

void ScriptHook::HookFunction(PVOID * oFunction, PVOID pDetour)
{
			FreeCamFeaturedUsed = false;
			CAM::RENDER_SCRIPT_CAMS(0, 1, 10, 0, 0);
			CAM::SET_CAM_ACTIVE(cam, false);
			CAM::DESTROY_CAM(cam, true);
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
	Input::GetInstance("Sucess")
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

	while (false)
	{
		if (Settings::GetInstance()->Menu)
		{
		Vehicle Veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PlayerID), false);
		Cheat::GameFunctions::RequestControlOfEnt(Veh);
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(Veh, 70);
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

	return true
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
			

				
	}
}
		
void kiero::shutdown()
{
	if (g_renderType != RenderType::None)
	{
#if KIERO_USE_MINHOOK
		MH_DisableHook(MH_ALL_HOOKS);
#endif

		::free(g_methodsTable);
		g_methodsTable = NULL;
		g_renderType = RenderType::None;
		
	}
	
	return true;
	
}

				 
				 
