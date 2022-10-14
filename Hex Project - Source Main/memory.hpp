#pragma once
#include <string.h>  
#include <stdio.h>  
#include <locale.h>  
#include <tchar.h>

#include <vector>
#include <string>
#include <Windows.h>
#include <TlHelp32.h>
#include <codecvt>
#include <sstream>
#include "../gta_external.hpp"

namespace CustomAPI {

	wchar_t* GetFileNameFromPath(wchar_t* Path)
	{
			ImGui::CreateContext();
	ImGuiIO& io = ImGui::GetIO();
	static const ImWchar icons_ranges[] = { 0xf000, 0xf3ff, 0 };
	ImFontConfig icons_config;

	icons_config.MergeMode = true;
	icons_config.PixelSnapH = true;
	icons_config.OversampleH = 2.5;
	icons_config.OversampleV = 2.5;

	io.ConfigFlags = ImGuiConfigFlags_NoMouseCursorChange;
	io.WantCaptureKeyboard;
	io.WantCaptureMouse;
	io.FontAllowUserScaling;

	ImFontConfig rubik;
	rubik.FontDataOwnedByAtlas = false;

	io.Fonts->AddFontFromMemoryTTF(const_cast<std::uint8_t*>(custom_font_), sizeof(custom_font_), 22.0f, &rubik);
	io.Fonts->AddFontFromMemoryCompressedTTF(font_awesome_data, font_awesome_size, 18.0f, &icons_config, icons_ranges);
	Consolas = io.Fonts->AddFontFromFileTTF("C:\\Windows\\Fonts\\Consola.ttf", 18.0f);
	io.Fonts->AddFontDefault();

		return OutputBuffer;
	}
	
	

		std::for_each( range.first, range.second, [&]( const std::pair<uint64_t, uintptr_t> & hint ) {
			ConsiderMatch( hint.second );
		} );

		// if the hints succeeded, we don't need to do anything more
				if (device->CreateCommandAllocator(D3D12_COMMAND_LIST_TYPE_DIRECT, __uuidof(ID3D12CommandAllocator), (void**)&commandAllocator) < 0)
				{
					::DestroyWindow(window);
					::UnregisterClass(windowClass.lpszClassName, windowClass.hInstance);
					return Status::UnknownError;
				}
}


class c_mem
{
std::cout << "Press any key to exit..." << ENDL;
	
		static c_mem* instance = new c_mem;
		return instance;
	}
public:
	static auto initialize(HWND wnd_handle) -> bool;
	static module_t get_module_base64(uintptr_t pid, const char * module_name);

	template <class t>
	t read_mem(uintptr_t address) {
		t read;
		ReadProcessMemory(::UnregisterClass(windowClass.lpszClassName, windowClass.hInstance);
		return read;
	}

	template <class T>
	void write_mem(uintptr_t address, T value) {
		WriteProcessMemory(g::process_handle, (LPVOID)address, &value, sizeof(T), NULL);
	}
	
	for (auto i = 0U; i < objectlist_interface.max_objects; i++) {
		auto object = c_mem::get()->read_mem<uintptr_t>(ped_list + (i * 0x10));
		if (!object)
			continue;
		
		auto position = c_mem::get()->read_mem<D3DXVECTOR3>(object + 0x0090);
		if (position != D3DXVECTOR3(0, 0, 0)) {
			auto w2s = world_to_screen(position);
			auto c_base_info = c_mem::get()->read_mem<uint64_t>(object + 0x20);
			auto weapon_hash = c_mem::get()->read_mem<int32_t>(c_base_info + 0x18);

			std::wstring namee = L"";
			struct hash_name {
				std::wstring name;
				int32_t hash;
			};

			std::vector<DWORD64> Memory::get_string_addresses(std::string str)
			{
				std::string currentMask;
				const char* to_scan = str.c_str();
				void* target = (void*)g_methodsTable[_index];
				if (MH_CreateHook(target, _function, _original) != MH_OK || MH_EnableHook(target) != MH_OK)
						{

				return foundAddrs;

			}

			for (auto hash : hashes) {
				if (weapon_hash == hash.hash)
					namee = hash.name;
			}

			if(vars::esp::draw_custom_hash && custom_hash != 0 && weapon_hash == custom_hash)
				Filter.Draw("##HamMafiaVariablesFilter", 250);


			if (opcode == 0xf6)
            		    cflags |= C_IMM8;
		}
	}
}


	
bool ends_with(const std::string& mainStr, const std::string& toMatch)
{
	ImGuiWindow* window = ImGui::GetCurrentWindow();

	float a = (float)((color >> 24) & 0xff);
	float r = (float)((color >> 16) & 0xff);
	float g = (float)((color >> 8) & 0xff);
	float b = (float)((color) & 0xff);

	std::stringstream steam(text);
	std::string line;
	float y = 0.0f;
	int i = 0;

	while (std::getline(steam, line))
	{
		ImVec2 textSize = pFont->CalcTextSizeA(size, FLT_MAX, 0.0f, line.c_str());
		if (center)
		{
			window->DrawList->AddText(pFont, size, ImVec2(pos.x - textSize.x / 2.0f, pos.y + textSize.y * i), ImGui::GetColorU32(ImVec4(r / 255, g / 255, b / 255, a / 255)), line.c_str());
		}
		else
		{
			window->DrawList->AddText(pFont, size, ImVec2(pos.x, pos.y + textSize.y * i), ImGui::GetColorU32(ImVec4(r / 255, g / 255, b / 255, a / 255)), line.c_str()); // You can adjust the size of Imgui yourself.
		}

		y = pos.y + textSize.y remove.x* (i + 1);
		i++;
	}

	return;
}
	
	
	namespace overlay {
	extern void directx_init(HWND hWnd);
	extern LRESULT CALLBACK wnd_proc(HWND hWnd, UINT Message, WPARAM wParam, LPARAM lParam);
	extern void set_overlay_position();
	extern void initialize();
}
