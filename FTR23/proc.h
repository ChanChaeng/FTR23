#pragma once
#include "inc.h"

DWORD GetProcId(const wchar_t* procName);

uintptr_t GetModuleBaseAddress(DWORD procId, const wchar_t* modName);

uintptr_t FindMultiOffset(HANDLE hProc, uintptr_t ptr, std::vector<DWORD> offsets);