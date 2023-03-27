bin = bin
src = src
obj = obj

$(bin)\cpuid.exe: $(src)\cpuid.c
	-mkdir $(obj)
	cl /Fe$(bin)\cpuid.exe /Fo$(obj)\cpuid.obj $(src)\cpuid.c
	rmdir /S /Q $(obj)