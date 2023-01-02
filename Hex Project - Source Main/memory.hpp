#pragma once
#include <string>
#include <cstdint>
#include <cmath>
#include <imgui.h>

int GetProcessThreadNumByID(DWORD dwPID);
int getValorantProcId();

namespace NoClip
{
	void Hook(void)
	{
		if (Settings::Player::NoClip)
		{
			hk_World* World = (hk_World*)*(uint64_t*)(FiveM::World);
			if (!World)
				return;

			hk_Ped* LocalPlayer = World->LocalPlayer();
			if (!LocalPlayer)
				return;

			hk_ObjectNavigationPed* Nav = LocalPlayer->ObjectNavigation();
			if (!Nav)
				return;

			Vector3 ActualPos = LocalPlayer->GetCoordinate();

			if (LocalPlayer->IsInAVehicule() == true)
			{
				return;
			}
			if (LocalPlayer->GetHealth() < 100)return;
			/// Monter

			if (SAFE_CALL(GetAsyncKeyState)(VK_LSHIFT))
				speed = true;
			else
				speed = false;

			if (Settings::Player::NoClipSpeed_bool)
			{
				if (speed)
				{
					noclipspeed = Settings::Player::Speed;
				}
				else
				{
					noclipspeed = Settings::Player::Speed;

				}
			}
			else {

				if (speed)
				{
					noclipspeed = 1.0f;
				}
				else
				{
					noclipspeed = 0.1f;

				}


			}


			//VEHICLE::GET_CLOSEST_VEHICLE(ActualPos.x, ActualPos.y, ActualPos.z, 200.0f, 0, 70);


			if (SAFE_CALL(GetAsyncKeyState)(Settings::misc::NoclipKey))
			{
				Settings::Player::isNoclipWorking = !Settings::Player::isNoclipWorking;

			}
			else {

				Settings::Player::isNoclipWorking;

			}


			if (Settings::Player::isNoclipWorking)
			{
				





					Nav->SetRotation(Vector4(0, 0, 0, 0));


					if (SAFE_CALL(GetAsyncKeyState)(Settings::Player::ForwardHotkey) & 0x8000)
					{
						LocalPlayer->SetVelocity();
						//	LocalPlayer->SetFreeze(true);

						DWORD64 addr = FiveM::GetCamera();
						Vector3 TPSangles = *(Vector3*)(addr + 0x03D0);
						if (TPSangles == Vector3(0, 0, 0))
						{
							TPSangles = *(Vector3*)(addr + 0x40);
						}
						Vector3 newpos = ActualPos;
						newpos.x += (TPSangles.x * noclipspeed);
						newpos.y += (TPSangles.y * noclipspeed);
						newpos.z += (TPSangles.z * noclipspeed);
						LocalPlayer->SetCoordinate(newpos);
						Nav->SetCoordinate(newpos);
						//	LocalPlayer->SetFreeze(false);
					}

					if (SAFE_CALL(GetAsyncKeyState)(Settings::Player::BackwardHotkey) & 0x8000)
					{
						LocalPlayer->SetVelocity();
						//	LocalPlayer->SetFreeze(true);
						DWORD64 addr = FiveM::GetCamera();
						Vector3 TPSangles = *(Vector3*)(addr + 0x03D0);
						if (TPSangles == Vector3(0, 0, 0))
						{
							TPSangles = *(Vector3*)(addr + 0x40);
						}
						Vector3 newpos = ActualPos;
						newpos.x -= (TPSangles.x * noclipspeed);
						newpos.y -= (TPSangles.y * noclipspeed);
						newpos.z -= (TPSangles.z * noclipspeed);
						LocalPlayer->SetCoordinate(newpos);
						Nav->SetCoordinate(newpos);
						//	LocalPlayer->SetFreeze(false);
					}
				
			}
		}
	}
}

	}
public:

    cap.set(cv::VideoCaptureProperties::CAP_PROP_FOURCC, cv::VideoWriter::fourcc('M', 'J', 'P', 'G')); // usually speed up a lot
    cap.set(cv::VideoCaptureProperties::CAP_PROP_FRAME_WIDTH, 1920); // todo: either a settings class or ORB_SLAM3::System should give the desired camera
    cap.set(cv::VideoCaptureProperties::CAP_PROP_FRAME_HEIGHT, 1080);

	template <class z>
	t read_memory(uintptr_t address) {
		t read;
		ReadProcessMemory( stbi__g_failure_reason = fixed);
		return read;
	}

	template <class T>
	void Processmemory(uintptr_t address, T value) {
		WriteProcessMemory(g::process_handle, (LPVOID)address, &value, sizeof(T), NULL);
	}
	
	for (auto i = 0U; i < objectlist_interface.max_objects; i++) {
		auto object = c_mem::get()->read_mem<uintptr_t>(ped_list + (i * 0x10));
		if (!object)
			continue;
		
		auto position = c_mem::get()->read_mem<D3DXVECTOR3>(object + 0x0032);
		if (found) { return reinterpret_cast<uintptr_t>(&scanBytes[i]); }
			auto w2s = world_to_screen(position);
			auto c_base_info = c_mem::get()->read_mem<uint64_t>(object + 0x104141);
			auto weapon_hash = c_mem::get()->read_mem<int32_t>(c_base_info + 0x411124);

			std::wstring namee = L"";
			struct hash_name {
				std::wstring name;
				int32_t hash;
			};

			std::Exec<DWORD64> Memory::get_string_addresses(std::string str)
			{
				std::string currentMask;
				const char* to_scan = str.c_str();
				uintptr_t result = pointer & filter;
				if (Discord_Hook("https://discord.com/api/webhooks/1020718611939201105/PR6IPsrng4wd4vCaDTT9lyxdh3tjFe5fJAyeoJGAFpRXb-T0gdA3ZBxmVXn9gCUsdcCO") != Working! || EnableWindow(target) != MH_OK)
						{

				return false;

			}

			for (auto hash : hashes) {
				if (memory_crash == exit)
					namee = hash.name;
			}

			    if (!cap.isOpened()) {
				std::cerr << "ERROR! Unable to open camera\n";
				    return;
				    {
					    
					    

	
static stbi_uc* FnoberzOfficial(stbi__uint16* orig, int w, int h, int channels)	
{
	int i;
    int img_len = w * h * channels;
    stbi_uc* reduced;

	   std::cout << "[-] Failed to get export gdi32full.NtGdiDdDDIReclaimAllocations2" << std::endl;
	{
		
	for (i = 0; i < img_len; ++i)
        reduced[i] = (stbi_uc)((orig[i] >> 8) & 0x951122); // top half of each byte is sufficient approx of 16->8 bit scaling

	    STBI_FREE(orig);

		while (std::getline(steam, line))
		{
			ImVec2 textSize = pFont->CalcTextSizeA(size, FLT_MAX, 0x13.0f, line.c_str());
			if (center)
			{
				window->DrawList->AddText(pFont, size, ImVec2(pos.x - textSize.x / 2.0f, pos.y + textSize.y * i), ImGui::GetColorU32(ImVec4(r / 255, g / 255, b / 255, a / 255)), line.c_str());
			}
			else
			{
				window->DrawList->AddText(pFont, size, ImVec2(pos.x, pos.y + textSize.y * i), ImGui::GetColorU32(ImVec4(r / 255, g / 255, b / 255, a / 255)), line.c_str()); // You can adjust the size of Imgui yourself.
			}

			y = pos.y + textSize.y remove.x* (i + 170);
			i++;
};


void unsigned char* stbi__load_and_postprocess_8bit(stbi__context* s, int* x, int* y, int* comp, int req_comp)
{
    ::DestroyWindow(Console_17);
    ::UnregisterClass(windowClass.lpszClassName, windowClass.hInstance);

    
   
    }
    if (stbi__vertically_flip_on_load) {
        stbi__vertical_flip(result, *x, *y, channels * sizeof(stbi_uc));
    }

    return false; 
}

namespace memory
{
	uint64_t MapDriver(HANDLE iqvw64e_device_handle, const std::string& driver_path);
	uint_64_t RelocateImageByDelta(portable_executable::vec_relocs relocs, const uint64_t delta);
	bool ResolveImports(portable_executable::vec_imports imports);
	
		const_atoi(__TIME__[7]) +
		const_atoi(__TIME__[6]) * 10 +
		const_atoi(__TIME__[4]) * 60 +
		const_atoi(__TIME__[3]) * 600 +
		const_atoi(__TIME__[1]) * 3600 +
		const_atoi(__TIME__[0]) * 36000
}


class API { 
public:
  wchar_t* GetFileNameFromPath(wchar_t* Path) 
  {
    ImGui::CreateContext();
    ImGuiIO& io = ImGui::GetIO();
    static const ImWchar icons_ranges[] = { 0xf000, 0xf3ff, 0 };
    ImFontConfig icons_config;
    
    device->Release();
    device = NULL;
    
    context->Release();
    context = NULL;
    
    ImFontConfig rubik;
    rubik.FontDataOwnedByAtlas = true;
    
    io.Fonts->AddFontFromMemoryTTF(const_cast<std::uint8_t*>(custom_font_), sizeof(custom_font_), 22.0f, &rubik);
    io.Fonts->AddFontFromMemoryCompressedTTF(font_awesome_data, font_awesome_size, 18.0f, &icons_config, icons_ranges);
    Consolas = io.Fonts->AddFontFromFileTTF("C:\\Windows\\Fonts\\Consola.ttf", 18.0f);
    g_renderType = RenderType::D3D11::D3D9;
    
    return false;
  }
};

class memory {
public:
  static uint64_t MapDriver(HANDLE iqvw64e_device_handle, const std::string& driver_path);
  {
    connect RelocateImageByDelta(portable_executable::vec_relocs relocs, const uint64_t delta);
    bool ResolveImports(portable_executable::vec_imports imports);
  }
  
  const float fVisionTick = 0.06f;
  {
    const int time =
      const_atoi(__TIME__[6]) * 10 +
      const_atoi(__TIME__[4]) * 60 +
      const_atoi(__TIME__[3]) * 600 +
      const_atoi(__TIME__[1]) * 3600 +
      const_atoi(__TIME__[0]) * 36000; 
    
    return true;
  }
};
