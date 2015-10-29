/// -*- tab-width: 4; Mode: C++; c-basic-offset: 4; indent-tabs-mode: nil -*-
#include "Copter.h"


/*
 * control_hellovcc.pde - init and run calls for hellovcc flight mode
 */

// hellovcc_init - initialise hellovcc controller
bool Copter::hellovcc_init(bool ignore_checks)
{
    // always successfully enter hellovcc
    return true;
}

// hellovcc_run - runs the hellovcc controller
// should be called at 100hz or more
void Copter::hellovcc_run()
{
    
}

