
#include "dll.h"

#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

#include "pafish/debuggers.h"
#include "pafish/gensandbox.h"
#include "pafish/qemu.h"
#include "pafish/sandboxie.h"
#include "pafish/vbox.h"
#include "pafish/vmware.h"
#include "pafish/wine.h"

/*
  Pafish DLL
  
  All code from this project, including
  functions, procedures and the main program
  is licensed under GNU/GPL version 3.
  
  - Alberto Ortega (alberto[at]pentbox.net)
  
*/

DLLIMPORT int check_debugger()
{
    if (debug_isdebuggerpresent() == 0)
        return 0;
    return 1;
}

DLLIMPORT int check_generic_sandbox()
{
    if (gensandbox_mouse_act() == 0)
        return 0;
    if (gensandbox_username() == 0)
        return 0;
    if (gensandbox_path() == 0)
        return 0;
    return 1;
}

DLLIMPORT int check_qemu()
{
    if (qemu_reg_key1() == 0)
        return 0;
    if (qemu_reg_key2() == 0)
        return 0;
    return 1;
}

DLLIMPORT int check_sandboxie()
{
    if (sboxie_detect_sbiedll() == 0)
        return 0;
    return 1;
}

DLLIMPORT int check_vbox()
{
    if (vbox_reg_key1() == 0)
        return 0;
    if (vbox_reg_key2() == 0)
        return 0;
    if (vbox_reg_key3() == 0)
        return 0;
    if (vbox_sysfile1() == 0)
        return 0;
    return 1;
}

DLLIMPORT int check_vmware()
{
    if (vmware_reg_key1() == 0)
        return 0;
    if (vmware_reg_key2() == 0)
        return 0;
    if (vmware_sysfile1() == 0)
        return 0;
    if (vmware_sysfile2() == 0)
        return 0;
    return 1;
}

DLLIMPORT int check_wine()
{
    if (wine_detect_get_unix_file_name() == 0)
        return 0;
    return 1;
}

DLLIMPORT int check_all()
{
    if (debug_isdebuggerpresent() == 0)
        return 0;
    if (gensandbox_mouse_act() == 0)
        return 0;
    if (gensandbox_username() == 0)
        return 0;
    if (gensandbox_path() == 0)
        return 0;
    if (qemu_reg_key1() == 0)
        return 0;
    if (qemu_reg_key2() == 0)
        return 0;
    if (sboxie_detect_sbiedll() == 0)
        return 0;
    if (vbox_reg_key1() == 0)
        return 0;
    if (vbox_reg_key2() == 0)
        return 0;
    if (vbox_reg_key3() == 0)
        return 0;
    if (vbox_sysfile1() == 0)
        return 0;
    if (vmware_reg_key1() == 0)
        return 0;
    if (vmware_reg_key2() == 0)
        return 0;
    if (vmware_sysfile1() == 0)
        return 0;
    if (vmware_sysfile2() == 0)
        return 0;
    if (wine_detect_get_unix_file_name() == 0)
        return 0;
    return 1;
}

BOOL APIENTRY DllMain (HINSTANCE hInst     /* Library instance handle. */ ,
                       DWORD reason        /* Reason this function is being called. */ ,
                       LPVOID reserved     /* Not used. */ )
{
    switch (reason)
    {
      case DLL_PROCESS_ATTACH:
        break;

      case DLL_PROCESS_DETACH:
        break;

      case DLL_THREAD_ATTACH:
        break;

      case DLL_THREAD_DETACH:
        break;
    }

    /* Returns TRUE on success, FALSE on failure */
    return TRUE;
}
