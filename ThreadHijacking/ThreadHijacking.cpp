#include "utils.h"

int main()
{
	DWORD procID = 1337;
	HANDLE proc = OpenProcess(PROCESS_ALL_ACCESS, FALSE, procID);
	threadHijacking(proc, L"test.dll");
	WaitForSingleObject(proc, INFINITE);
	return 0;
}


