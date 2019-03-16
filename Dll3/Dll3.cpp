#include "stdafx.h"
#include <iostream>
#include "Dll3.h"
using namespace std;

extern "C" __declspec(dllexport) void name()
{
	cout << "Andrey";
}

extern "C" __declspec(dllexport) void surname()
{
	cout << "Demidov";
}

extern "C" __declspec(dllexport) void group()
{
	cout << "Ri-541216";
}
