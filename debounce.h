/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef DEBOUNCE_H_
#define DEBOUNCE_H_

#include "stdint.h"

typedef struct
    {
	uint32_t debCount, debCntr,lastInp, lastOut;
    } debouncer_t;

void Debounce_Reset(debouncer_t *debouncer);
uint32_t Debounce(debouncer_t *debouncer,  uint32_t inp);

#endif /* DEBOUNCE_H */

/************************ (C) COPYRIGHT IRANDYNAMICS *****END OF FILE****/
