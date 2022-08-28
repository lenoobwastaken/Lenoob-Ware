#pragma once
#include <iostream>
#include <stdio.h>
#include <Windows.h>

namespace LogUtils
{
    void Log(LPCSTR msg)
    {
        std::cout << "[Deranged] " << msg << std::endl;
    }
}
