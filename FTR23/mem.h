#pragma once
#include "inc.h"

inline DWORD pid = 0;
inline HANDLE hProc = 0;
inline intptr_t moduleBase = 0;
inline intptr_t controller1Addr = 0;
inline intptr_t controller2Addr = 0;
inline intptr_t controller3Addr = 0;
inline intptr_t controller4Addr = 0;
inline intptr_t keyboardAddr = 0;
inline intptr_t cpu1Addr = 0;
inline intptr_t cpu2Addr = 0;
inline const unsigned int c1 = 4294967295, c2 = 4294967295, c3 = 4294967295, c4 = 4294967295, kb = 4294967295, home = 0, away = 1;