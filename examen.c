#include "examen.h"
void CprodEsc12(uint8_t* vectorIn , uint8_t* vectorOut , uint32_t longitud )
{
	uint8_t promedio;
    
    for (uint32_t i = 0 ; i< longitud ; i++)
	{
		promedio=vectorIn[i]+promedio;
	}
    promedio=promedio/longitud;
    
    for (uint32_t i = 0; i < longitud ; i++)
    {
        vectorOut[i]=vectorIn[i]-promedio;
    }
    
}