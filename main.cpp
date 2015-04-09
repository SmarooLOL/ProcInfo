#include "stdafx.h"
#include <Windows.h>
#include <iostream>
using namespace std;
int _tmain(int argc, _TCHAR* argv[])
{
	int ignore;
	SYSTEM_INFO siSysInfo;

	GetSystemInfo(&siSysInfo);

	printf("Hardware information: \n");
	printf("  OEM ID: %u\n", siSysInfo.dwOemId);
	printf("  Number of processors: %u\n",
		siSysInfo.dwNumberOfProcessors);
	printf("  Page size: %u\n", siSysInfo.dwPageSize);
	printf("  Processor type: %u\n", siSysInfo.dwProcessorType);
	printf("  Minimum application address: %lx\n",
		siSysInfo.lpMinimumApplicationAddress);
	printf("  Maximum application address: %lx\n",
		siSysInfo.lpMaximumApplicationAddress);
	printf("  Active processor mask: %u\n",
		siSysInfo.dwActiveProcessorMask);
	std::cin >> ignore;
}

