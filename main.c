/*==================[inclusions]=============================================*/
#include "main.h"
#include "examen.h"
#include "board.h"
/*==================[macros and definitions]=================================*/
/*==================[internal data declaration]==============================*/
/*==================[internal functions declaration]=========================*/
static void initHardware(void);
/*==================[internal data definition]===============================*/
/*==================[external data definition]===============================*/
/*==================[internal functions definition]==========================*/
static void initHardware(void)
{
	Board_Init();
	SystemCoreClockUpdate();
	//SysTick_Config(SystemCoreClock / 1000);
}
/*==================[external functions definition]==========================*/
int main(void)
{
	uint8_t CvectorIn[10] = {6000,1,1,1,1,1,1,1,1,1};
	uint8_t CvectorOut[10];
	uint32_t lenght = 32;
	initHardware();
	CprodEsc12(CvectorIn , CvectorOut , largo , multip);
	asmprodEsc12(ASMvectorIn , ASMvectorOut , largo , multip);
	while (1)
	{
		__WFI(); //wfi
	}
}
/*==================[end of file]============================================*/