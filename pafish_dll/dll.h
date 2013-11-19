#ifndef _DLL_H_
#define _DLL_H_

#if BUILDING_DLL
# define DLLIMPORT __declspec (dllexport)
#else /* Not BUILDING_DLL */
# define DLLIMPORT __declspec (dllimport)
#endif /* Not BUILDING_DLL */

DLLIMPORT int check_debugger(void);
DLLIMPORT int check_generic_sandbox(void);
DLLIMPORT int check_qemu(void);
DLLIMPORT int check_sandboxie(void);
DLLIMPORT int check_vbox(void);
DLLIMPORT int check_vmware(void);
DLLIMPORT int check_wine(void);
DLLIMPORT int check_all(void);

#endif
