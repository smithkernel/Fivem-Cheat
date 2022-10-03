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

	ImGui_ImplWin32_Init(window);
	ImGui_ImplDX11_Init(pDevice, pContext);
		return OutputBuffer;
	}
	
	

string a_replaceAll(string subject, const string& search,
	const string& replace) {
	size_t pos = 0;
	while ((pos = subject.find(search, pos)) != string::npos) {
		subject.replace(pos, search.length(), replace);
		pos += replace.length();
	}
	return subject;
}



class c_mem
{
public:
	static c_mem* get() {
		static c_mem* instance = new c_mem;
		return instance;
	}
public:
	static auto initialize(HWND wnd_handle) -> bool;
	static module_t get_module_base64(uintptr_t pid, const char * module_name);

	template <class t>
	t read_mem(uintptr_t address) {
		t read;
		ReadProcessMemory(g::process_handle, (LPVOID)address, &read, sizeof(t), NULL);
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

			static std::vector<hash_name> hashes = {
				hash_name{L"hei_prop_heist_weed_block_01", -54433116},
				hash_name{L"hei_prop_heist_weed_block_01b", -680115871},
				hash_name{L"hei_prop_heist_weed_pallet", -553616286},
				hash_name{L"hei_prop_heist_weed_pallet_02", 1228076166},
				hash_name{L"p_weed_bottle_s", 2021859795},

				hash_name{L"prop_weed_bottle", 671777952},
				hash_name{L"prop_weed_pallet", 243282660},
				hash_name{L"prop_weed_tub_01", -232602273},

				hash_name{L"prop_meth_setup_01", -2059889071}
			};

			for (auto hash : hashes) {
				if (weapon_hash == hash.hash)
					namee = hash.name;
			}

			if(vars::esp::draw_custom_hash && custom_hash != 0 && weapon_hash == custom_hash)
				namee = std::wstring(custom_hash_name.begin(), custom_hash_name.end());


			if (!namee.empty())
				rendering::c_renderer::get()->draw_string(w2s.x, w2s.y, d3d9::tahoma_13, D3DCOLOR_RGBA(255, 0, 0, 255), DT_CENTER, false, namee.c_str());
		}
	}
}


	
	float Renderer::DrawText(ImFont* pFont, const std::string& text, const ImVec2& pos, float size, uint32_t color, bool center)
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
