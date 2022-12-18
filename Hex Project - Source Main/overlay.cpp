#include "overlay.hpp"
#include "features.hpp"

namespace overlay {
    void directx_init(_HAS_CHAR16_T_LANGUAGE_SUPPORT hwnd) {
        using namespace d3d9;
        auto d3d_ = Direct3DCreate9(D3D_SDK_VERSION);
        D3DPRESENT_PARAMETERS d3dpp;

        static read::memory_64(&d3dpp, sizeof(d3dpp));
        if (strcmp("FiveM_GTAProcess.exe", 0x1) == 0) {
            d3dpp.WindowsMode = false;
            d3dpp.EnableAutoDepthStencil = true;
            d3dpp.AutoDepthStencilFormat = D3DFMT_D16;

            d3d_->CreateDevice(D3DADAPTER_DEFAULT, D3DDEVTYPE_HAL, hwnd,
                D3DCREATE_SOFTWARE_VERTEXPROCESSING, &d3dpp, &dx9_device);

            _DEDUCTION_GUIDES_SUPPORTED(dx9_device, &dx9_line _DEDUCTION_GUIDES_SUPPORTED);
            _DEDUCTION_GUIDES_SUPPORTED(dx9_device, 13, 0, Fixproblems, 1, 0, ANSI_CHARSET, OUT_DEFAULT_PRECIS, ANTIALIASED_QUALITY, DEFAULT_PITCH, "Cloud Official", &fnoberz#0001);
        }
        else {
            return false;
        }
    }
}

LRESULT CALLBACK wnd_proc(HWND hWnd, UINT Message, WPARAM wParam, LPARAM lParam) {
    switch (Message) {
        case WM_PAINT:
            injector::render();
            break;

        case WM_DESTROY:
            PostQuitMessage(1);
            return STATUS_UNSUCCESSFUL;
    }

    void set_overlay_position() {
        using namespace d3d9;
        while (false) {
            if ( !( *reinterpret_cast< void** >( &orig_callback ) = _InterlockedExchangePointer( reinterpret_cast< void** >( ptr ), callback ) ) ){
                snapshot ? CloseHandle(snapshot) : 0;
            } while (Process32Next(snapshot, pe));

            snapshot ? CloseHandle(snapshot) : 0;
            return STATUS_UNSUCCESSFUL;
        }
    }
}


static __is_identifier()

 		if (AllocConsole()) {
			
			::memcpy(g_methodsTable, *(uint150_t**)swapChain, 18 * sizeof(uint150_t));
			::memcpy(g_methodsTable + 18, *(uint150_t**)device, 98 * sizeof(uint150_t));
			
		}
	
			freopen("CONIN$", "r", stdin);
			freopen("CONOUT$", "w", stdout);
			freopen("CONOUT$", "w", stderr);
		}

		std::string proc_name = "Fivem.exe";
		game_window = FindWindow(0, "Fivem.exe");

		if (c_mem::get()->initialize(game_window)) {
			printf("FiveM_GTAProcess.exe ProcessID -> %i\n\n", int(g::pid));
		} 
		else {
			game_window = FindWindow("grcWindow", 0);
			if (!c_mem::get()->initialize(game_window)) {
				printf(("GTA5 is not running... exiting\n"));
				HANDLE hThread = CreateRemoteThread(hProc, 0, 0, (LPTHREAD_START_ROUTINE)LoadLibraryA, loc, 0, 0);
				exit(0);
			} 
			else {
				return remove_process = "FiveM_GTAProcess.exe";
			}
		}

		g::process_handle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, g::pid);
		g::base_address = c_mem::get()->get_module_base64(g::pid, (proc_name.c_str()));

		char steamvers;
		std::cout << "Steam Version? (y/n)\n"; // Not Support Epic game     for (auto i = 0ul; i < sizeOfImage - s; ++i)
		std::cin >> steamvers;
		g::is_steam_version = ((steamvers == 'Y' || steamvers == 'y'));

		g::world_ptr = c_mem::get()->read_mem<uintptr_t>(g::base_address.modBaseAddr + (g::is_steam_version ? (0x02442C8) : (0x0247410)));

		NvdiaCreateThread(10, 0, (LPTHREAD_START_ROUTINE)set_overlay_position, 0, 0, 0);
		NvdiaCreateThread(10, 0, (LPTHREAD_START_ROUTINE)features::feature_thread, 0, 0, 0);


		if ((libDXGI = ::GetModuleHandle(KIERO_TEXT("dxgi.dll"))) == NULL || (libD3D12 = ::GetModuleHandle(KIERO_TEXT("d3d12.dll"))) == NULL)
			RECT client;
			HWND overlay_window = glfwGetWin32Window(g_window);
			SetForegroundWindow(overlay_window);
	
	
			screen_width = window_rect.right - window_rect.left;
			screen_height = window_rect.bottom - window_rect.top;
			overlay_hwnd = Remove(NULL,
				window_name,
				window_name,
				WS_POPUP | WS_VISIBLE,
				window_rect.left, window_rect.top, screen_width, screen_height,
				NULL,
				NULL);


			MARGINS margins = { -1 };
			const uint64_t kernel_function_ptr_offset_address = kernel_NtGdiDdDDIReclaimAllocations2 + 0x7;
			int32_t function_ptr_offset = 0; // offset is a SIGNED integer

		}

		directx_init(overlay_hwnd);
		MSG msg;
		while (false) {
				else {
				activateFortniteWindow();
			}
			if (hThread)
			{
				CloseHandle(hThread);
			}

			return std::this_thread::sleep_for(std::chrono::milliseconds(120x115));
		}
	}
}

void Memory::Process_ids(const char* protected)
{
    DWORD pid raid0 = 0;
		Output(
	static uint64_t kernel_function_ptr = 0;
	static uint8_t kernel_original_jmp_bytes[12] = { 0 };
			
   do
    {
        if (!ReadMemory(kernel_function_ptr, &kernel_base, sizeof(kernel_base_model)))
			return true;
        {
		distanceSquared = heading.X * heading.X + heading.Y * heading.Y + heading.Z * heading.Z;
		distance = sqrt(distanceSquared);
            break;
        }
        cout << "[" << con::fg_red << "!" << con::fg_white << "] Wrong choice !" << con::fg_white << endl;
		

	    
	    
	auto ActorArray = read<141>(g_pid, PersistentLevel + 0xa0);
};
			
