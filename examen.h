#ifndef _SUMA_H_
#define _SUMA_H_
/*==================[inclusions]=============================================*/
#include <stdint.h>
/*==================[cplusplus]==============================================*/
#ifdef __cplusplus
extern "C" {
#endif
/*==================[macros]=================================================*/
/*==================[typedef]================================================*/
/*==================[external data declaration]==============================*/
/*==================[external functions declaration]=========================*/
/**
 * Funcion que hace un producto escalar y lo satura a los 12 bits
 * @param vectorIn vector entrada
 * @param vectorOut vector salida
 * @param longitud del vector
 */
extern void asmprodEsc12(uint8_t* vectorIn , uint8_t* vectorOut , uint32_t longitud );
extern void CprodEsc12(uint8_t* vectorIn , uint8_t* vectorOut , uint32_t longitud );
/*==================[cplusplus]==============================================*/
#ifdef __cplusplus
}
#endif
/*==================[end of file]============================================*/
#endif /* #ifndef _MAIN_H_ */