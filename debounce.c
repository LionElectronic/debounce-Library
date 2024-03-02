#include "debounce.h"
/******************************************************************************/
void Debounce_Reset(debouncer_t *debouncer)
    {
    debouncer->debCntr = 0;
    debouncer->lastInp = 0;
    debouncer->lastOut = 0;
    }
/******************************************************************************/
/* out = in if in = in1 = in2 = ...= in for filter count */
__attribute__((optimize("-Ofast")))
uint32_t Debounce(debouncer_t *debouncer,  uint32_t inp)
    {
    if (inp == debouncer->lastInp)
	{
	if (++debouncer->debCntr >= debouncer->debCount)
	    {
	    debouncer->lastOut = inp;
	    debouncer->debCntr = 0;
	    }
	}
    else
	debouncer->debCntr = 0;

    debouncer->lastInp = inp;

    return debouncer->lastOut;
    }
/************************ (C) COPYRIGHT IRANDYNAMICS *****END OF FILE****/
