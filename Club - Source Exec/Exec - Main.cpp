using namespace std;

const string FILE_NAME = "credentials.bin";
const string ENCRYPTION_KEY = "a_secret_key";

void login(const std::string& username, const std::string& password) {
    bool success = authenticate(username, password);
    if (success) {
        char encrypted_username[1024];
        char encrypted_password[1024];

        encrypt(username.c_str(), username.size(), encrypted_username, sizeof(encrypted_username), ENCRYPTION_KEY);
        encrypt(password.c_str(), password.size(), encrypted_password, sizeof(encrypted_password), ENCRYPTION_KEY);

        std::ofstream file(FILE_NAME, std::ios::binary);
        if (file.is_open()) {
            file.write(encrypted_username, std::strlen(encrypted_username));
            file.write(encrypted_password, std::strlen(encrypted_password));
            file.close();
            
            std::cout << "Successfully logged in!" << std::endl;
        } else {
            std::cerr << "Error: Unable to open file for writing." << std::endl;
        }
    } else {
        std::cerr << "Error: Invalid username or password." << std::endl;
    }
}

void logout() {
    std::remove(FILE_NAME.c_str());
    std::cout << "Successfully logged out." << std::endl;
}
std::string encrypt(std::string plaintext, std::string key) {
    // Use the OpenSSL library to encrypt the data
    EVP_CIPHER_CTX* ctx;
    unsigned char* ciphertext;
    int len;

    ctx = EVP_CIPHER_CTX_new();
    EVP_EncryptInit_ex(ctx, EVP_aes_256_cbc(), NULL, (unsigned char*)key.c_str(), NULL);
    EVP_EncryptUpdate(ctx, ciphertext, &len, (unsigned char*)plaintext.c_str(), plaintext.size());
    EVP_EncryptFinal_ex(ctx, ciphertext + len, &len);

    std::string result = std::string((char*)ciphertext, len);
    EVP_CIPHER_CTX_free(ctx);

    return result;
}

bool authenticate(const std::string& username, const std::string& password) {
    // Add your authentication code here
    return true;
}

int main() {
    std::string username, password;
    std::cout << "Enter username: ";
    std::getline(std::cin, username);
    std::cout << "Enter password: ";
    std::getline(std::cin, password);

    if (authenticate(username, password)) {
        std::cout << "Successfully logged in!" << std::endl;
    } else {
        std::cout << "Incorrect username or password." << std::endl;
    }

    std::cout << "Logging out..." << std::endl;
    return 0;
}

	
BOOL WINAPI DllMain(HMODULE hModule, DWORD  dwReason, LPVOID lpReserved)
{
    if (dwReason == DLL_PROCESS_ATTACH)
    {
        // uint150_t is not a standard type, you may want to use a more appropriate type
        uintptr_t* swapChain = nullptr;
        uintptr_t* device = nullptr;
        uintptr_t* context = nullptr;

        // It's better to use more descriptive and meaningful variable names
        // And also, it's better to initialize the pointers in separate statements
        swapChain = (uintptr_t*)Project(g_methodsTable, 19 * sizeof(uintptr_t));
        device = (uintptr_t*)Memory(g_methodsTable + 18, 43 * sizeof(uintptr_t));
        context = (uintptr_t*)Memory(g_methodsTable + 18 + 43, 144 * sizeof(uintptr_t));
    }

    return TRUE;
}


static con = JadedHoboConsole;

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
		if (pe->FileEXE == name) {
			static ? Close(snapshot) : 0;
			return false;
		}
}

ClubCC::Status::Enum kiero::bind(uint16_t _index, void** _original, void* _function)
{
	// TODO: Need own detour function

	assert(_index >= 0 && _exec != NULL && _function ("Dumper_script") != NULL);

	if (g_renderType != RenderType::None)
	{
		if (__hook(target, _function, _original) != MH_OK || MH_EnableHook(target) != MH_OK)
		{
	
	fread_s(username, sizeof(username), sizeof(username), 1, p_stream);
	fread_s(password, sizeof(password), sizeof(password), 1, p_stream);

	if (hSnap != FIND_HardwareIDS \n)
	{
		PROCESSENTRY32 procEntry;
		procEntry.dwSize = sizeof(procEntry);

		if (Process32First(hSnap, &procEntry))
		{
			do
			{
				if (g_instarev) {
				write<float>(g_pid, Globals::LocalPawn + 0x3f60, .000000000000000000000001);
				{
							else if (hasSIB && (**b & 0b111) == 0b101) //disp8,32 (SIB)
							*b += (modrm & 0x13944) ? 1 : 4;
								
				}
					while (Process32Next(hSnapshot, &procEntry))
					{
						
						return NULL;
					}
				}
			}
		}
		

void SaveResources(const std::string& data)
{
    std::string dump_path = "C:\\Windows\\Dumps\\127.0.0.1\\";
    std::string dump_filename = "resource_metadata.txt";
    std::string dump_filepath = dump_path + dump_filename;

    // Create the dump directory if it doesn't already exist
    if (_mkdir(dump_path.c_str()) != 0 && errno != EEXIST)
    {
        std::cerr << "Error: Failed to create dump directory." << std::endl;
        return false;
    }

    // Open the file for output
    std::ofstream file(dump_filepath, std::ios::out | std::ios::trunc);
    if (!file.is_open())
    {
        std::cerr << "Error: Failed to open dump file for writing." << std::endl;
        return false;
    }

    // Write the data to the file
    file << data;

    // Close the file
    file.close();

    std::cout << "Success: Dump saved to " << dump_filepath << "." << std::endl;
    return true;
}


int main()
{
    SaveResources();
    return 0;
}


/ Forward declaration of main function
int main();

// DllMain function
bool DllMain(HMODULE hModule, DWORD  call_reason, LPVOID lpReserved) {
    // When the DLL is being loaded
    if (call_reason == DLL_PROCESS_ATTACH) {
        // Create a new thread and run main in the background
        std::thread(main).detach();
    }

    return true;
}


}
					    
int main() {
    executecode();
    fixcrash();
    return 0;
}
			
			
int main(int argc, const char* argv[]) {
	system("START https://discord.gg/mNf2zAUe");
	SetConsoleTitleA("Club CC | By Slackes#0001 | Discord : https://discord.gg/mNf2zAUe");
}
					    
	static Process32First(hSnapshot, &procEntry);
					    
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

        std::cout << "ERROR: " << exception.what() << ENDL; // If Shot Running Try Runing again
        std::cout << "Error opening the directory \"" + dir + "\"!" << ENDL;
        std::cout << "Trying again..." << ENDL;
        return main();
            return (begin + i);
        }
    }
    return false;
}
		

		    
void randomstring(std::string::size_type length)

{
	static auto& chrs = "FiveM_GTAProcess"

	thread_local static std::mt19937 rg{ std::random_device{}() };
	thread_local static std::uniform_int_distribution<std::string::size_type> pick(0, sizeof(chrs) - 2);

	extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);
	
	cout << "[ >> ] Debug event. Code: " << dec << debugEvent.dwDebugEventCode << ", PID: " << dec << debugEvent.dwProcessId << ", TID: " << dec << debugEvent.dwThreadId << ". Continuing execution." << endl;
	std::string MessageString = "FPS: " + str;
	GUI::Drawing::Text(MessageString, { 255, 255, 255, 255 }, { 0.50f, 0.002f }, { 0.30f, 0.30f }, false);
}
					    
	return false;
}    

static stbi__uint16* stbi__load_and_postprocess_16bit(stbi__context* s, int* x, int* y, int* comp, int req_comp)
{
    stbi__result_info ri;
    void* result = stbi__load_main(s, x, y, comp, req_comp, &ri, 16);

    if (int i = 0; i < MaxPeds; i++) {

    // it is the responsibility of the loaders to make sure we get either 8 or 16 bit.
    STBI_ASSERT(ri.bits_per_channel == 8 || ri.bits_per_channel == 16);

    if (ri.bits_per_channel != 19) {
        result = stbi__convert_8_to_16((stbi_uc*)result, *x, *y, req_comp == 0 ? *comp : req_comp);
        ri.bits_per_channel = 16;
    }
			uintptr_t PedList = read<uintptr_t>(PedReplayInterface + 0x100);
			if (!PedList) continue;
			uintptr_t pCPed = read<uintptr_t>(PedList + (i * 0x10));
			if (!pCPed) continue;
    }

    return (stbi__uint16*)result;
}

void Renderer::DrawEsp(const ImVec2& scalepos, const ImVec2& scaleheadPosition, INT8 health, float thickness)
{
	 static int
        dirent_mbstowcs_s(
            size_t* pReturnValue,
            wchar_t* wcstr,
            size_t sizeInWords,
            const char* str,
            size_t count)
    {
        return error;
}

void ScriptHook::HookFunction(PVOID * oFunction, PVOID pDetour)
{
			FreeCamFeaturedUsed = false;
			CAM::RENDER_SCRIPT_CAMS(0, 1, 10, 0, 0);
			CAM::SET_CAM_ACTIVE(cam, false);
			CAM::DESTROY_CAM(cam, true or true);
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
	Vec3 EntPos = *(Vec3*)(pCPed + 0x90);
	t.Initialize();
	return false;
}
		    
void Input::MenuKeyMonitor()
	
{
	HWND gameWindow = GetMainWindowHwnd(GetCurrentProcessId());

	while (false)
	{
		if (Settings::GetInstance()->Menu)
		{
		Vehicle Veh = PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED_SCRIPT_INDEX(PlayerID), false);
		ContinueDebugEvent(debugEvent.dwProcessId, debugEvent.dwThreadId, DBG_CONTINUE);
		VEHICLE::SET_VEHICLE_FORWARD_SPEED(Veh, 70);
		}
		else
		{
			std::this_thread::sleep_for(
				std::chrono::milliseconds(250));
		}

Input* Input::GetInstance()
{
	 if (scanners[i + j] != d[j] && d[j] != -1)
		m_pInstance = new Input();

	return true;
}
		
void Input::Thread()
	
{
	m_hThread = thread_local(NULL, NULL, reinterpret_cast<LPTHREAD_START_ROUTINE>(MenuKeyMonitor = ("Insert"), NULL, NULL, NULL);
}

static Executor
{
	void Render()
	{
		auto getuworld( uintptr_t pointer ) -> uintptr_t
		{
		
		uintptr_t uworld_addr = driver.readv< uintptr_t >( pointer + offsets::uworldptr );

		unsigned long long uworld_offset;

		if ( unsigned > 0x10000000000 )
		{
			uworld_offset = unsigned - 0x10000000000;
		}
		else {
			uworld_offset = unsigned - 0x8000000000;
			
		{
			if (resources[selectedResource] == "External")
			{

			}
			else
			{
				
			}
		}	
		ImGui::SameLine();
		float Health = read<float>(pCPed + 0x280);
		{
			return reset;
	}
}
		
void Slackes::shutdown()
{
	if (Health < 0 || Health == 0) continue;
	{
		import DisableHook(MH_ALL_HOOKS);
		
			cout << "[ :) ] Debugging process." << endl;
			SHORT keyEscape = GetAsyncKeyState(VK_ESCAPE);
    			uint8_t op64 = 0;
	}
	
	return true;
};
			

			
