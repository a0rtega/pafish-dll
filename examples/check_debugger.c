
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main(int argc, char *argv[])
{
  HMODULE lib = LoadLibrary("pafish.dll");
  FARPROC check_debugger = GetProcAddress(lib, "check_debugger");
  if (check_debugger() == 0)
    printf("\nI see you, my dear debugger ... ");
  else
    printf("\nIt is a sunny day in wonderland ... ");
  getchar();
  return 0;
}

