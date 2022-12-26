#include "5x6.h"

void pointing_device_init_kb(void) {
#ifdef PMW3360_CPI
    pointing_device_set_cpi(PMW3360_CPI);
#endif
}
