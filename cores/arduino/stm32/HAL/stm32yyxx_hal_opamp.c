#include "stm32_def_build.h"

#ifdef STM32F3xx
#include "stm32f3xx_hal_opamp.c"
#endif
#ifdef STM32L1xx
#include "stm32l1xx_hal_opamp.c"
#endif
#ifdef STM32L4xx
#include "stm32l4xx_hal_opamp.c"
#endif
