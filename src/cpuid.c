// cpuid.c
// +-a very simple program of cpuid instruction
#include <stdio.h>

int main(int argc, char** argv)
{
	// returned information from cpuid
	// eax, ebx, ecx, edx
	int CpuInfo[4];
	// cpuid function number and optional parameter
	int fn, opt;
	// input fn
	printf("input function number (lower case hexadecimal): ");
	scanf_s("%x", &fn);
	// input opt
	printf("input optional parameter (lower case hexadecimal, input 0 if not need): ");
	scanf_s("%x", &opt);
	// cpuid instruction
	// +-input
	// | +-array to store returned information
	// | +-cpuid funciton number
	// | +-cpuid optional parameter
	// +-reference: https://learn.microsoft.com/en-us/cpp/intrinsics/cpuid-cpuidex?view=msvc-170
	__cpuidex(CpuInfo, fn, opt);
	// output
	printf("eax=%08x, ebx=%08x, ecx=%08x, edx=%08x\n", CpuInfo[0], CpuInfo[1], CpuInfo[2], CpuInfo[3]);
	return 0;
}