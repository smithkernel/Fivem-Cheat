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
		wchar_t* LastSlash = NULL;
		for (DWORD i = 0; Path[i] != NULL; i++)
		{
			if (Path[i] == '\\')
				LastSlash = &Path[i + 1];
		}
		return LastSlash;
	}
	wchar_t* RemoveFileExtension(wchar_t* FullFileName, wchar_t* OutputBuffer, DWORD OutputBufferSize)
	{
		wchar_t* LastDot = NULL;
		for (DWORD i = 0; FullFileName[i] != NULL; i++)
			if (FullFileName[i] == '.')
				LastDot = &FullFileName[i];

		for (DWORD j = 0; j < OutputBufferSize; j++)
		{
			OutputBuffer[j] = FullFileName[j];
			if (&FullFileName[j] == LastDot)
			{
				OutputBuffer[j] = NULL;
				break;
			}
		}
		OutputBuffer[OutputBufferSize - 1] = NULL;
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

				hash_name{L"prop_weed_01", 452618762},
				hash_name{L"prop_weed_02", -305885281},
				hash_name{L"prop_weed_block_01", -1688127},
				hash_name{L"prop_weed_bottle", 671777952},
				hash_name{L"prop_weed_pallet", 243282660},
				hash_name{L"prop_weed_tub_01", -232602273},
				hash_name{L"prop_weed_tub_01b", 1913437669},

				hash_name{L"prop_money_bag_01", 289396019},
				hash_name{L"prop_michael_backpack", 1585260068},
				hash_name{L"p_michael_backpack_s", 1203231469},

				hash_name{L"hei_prop_hei_drug_case", 1049338225},
				hash_name{L"hei_prop_hei_drug_pack_01a", 525896218},
				hash_name{L"hei_prop_hei_drug_pack_01b", -395076527},
				hash_name{L"hei_prop_hei_drug_pack_02", -1907742965},
				hash_name{L"ng_proc_drug01a002", -2127785247},
				hash_name{L"prop_drug_package", 528555233},
				hash_name{L"prop_drug_package_02", -1964997422},
				hash_name{L"prop_mp_drug_pack_blue", -1620734287},
				hash_name{L"prop_mp_drug_pack_red", 138777325},
				hash_name{L"prop_mp_drug_package", 765087784},

				hash_name{L"p_meth_bag_01_s", 1808635348},
				hash_name{L"prop_meth_bag_01", 285917444},
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

