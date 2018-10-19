// GetAsynKeyStateDemo.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>
#include <iostream>

int _tmain(int argc, _TCHAR* argv[])
{
	while (TRUE)
	{
		int nTemp = GetAsyncKeyState(VK_SPACE);
		if(0 != nTemp)
		{
			std::cout << nTemp << std::endl;
		}
		
		Sleep(10);
	}
	return 0;
}

