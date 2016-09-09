/*++

Copyright (c) 2016 Minoca Corp. All Rights Reserved

Module Name:

    entry.c

Abstract:

    This module implements the dynamic library entry point for the Chalk OS
    module. It is kept separate from the rest of the library so that if the
    module is statically linked in this file can simply be left out.

Author:

    Evan Green 28-Aug-2016

Environment:

    C

--*/

//
// ------------------------------------------------------------------- Includes
//

#include "osp.h"

//
// ---------------------------------------------------------------- Definitions
//

//
// ------------------------------------------------------ Data Type Definitions
//

//
// ----------------------------------------------- Internal Function Prototypes
//

//
// -------------------------------------------------------------------- Globals
//

//
// ------------------------------------------------------------------ Functions
//

__DLLEXPORT
VOID
CkModuleInit (
    PCK_VM Vm
    )

/*++

Routine Description:

    This routine is the entry point into the module. It populates the module
    namespace.

Arguments:

    Vm - Supplies a pointer to the virtual machine.

Return Value:

    None.

--*/

{

    CkpOsModuleInit(Vm);
    return;
}

//
// --------------------------------------------------------- Internal Functions
//
