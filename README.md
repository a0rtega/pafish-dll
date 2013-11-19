# Pafish DLL

Pafish DLL (dynamic-link library) is the right way to use all features present on [pafish](https://github.com/a0rtega/pafish) in your own software project. Note that this is a side project, version numbers between projects are directly related.

You can download the latest version from [here](https://github.com/a0rtega/pafish-dll/raw/master/pafish.dll).

It is licensed under GNU/GPL version 3.

# Functions

DLLIMPORT int check\_debugger(void);  
DLLIMPORT int check\_generic\_sandbox(void);  
DLLIMPORT int check\_qemu(void);  
DLLIMPORT int check\_sandboxie(void);  
DLLIMPORT int check\_vbox(void);  
DLLIMPORT int check\_vmware(void);  
DLLIMPORT int check\_wine(void);  
DLLIMPORT int check\_all(void);

All functions return 0 when TRUE.

# Certificate

All releases from v024 will be shipped signed by the original development team. Consider everything without our certificate as unofficial, you can check it against the certificates present in the binaries from this repository.

# Build

Pafish is written in C and developed with [wxDev-C++](http://wxdsgn.sourceforge.net/).

# Author

Alberto Ortega (@[a0rtega](https://twitter.com/#!/a0rtega) - [profile](http://about.me/a0rtega)) - alberto[at]pentbox.net

