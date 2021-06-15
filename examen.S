	.syntax unified
	.text
	.global asmprodEsc12
#define vectorIn 		r0 //valor dado por la funcion
#define vectorOut 		r1 //valor daddo por la funcion 
#define longitud 		r2  //valor dado por la funcion
#define Indice_vector   r3  //valor creado para itecion de loop
#define promedio        r4  //valor creado para savcar el promedio
#define valoraux        r5  // valor creado para no alterar e vector de entrada
	.thumb_func
/**
 *	prototipo de la funcion en C
 *
 * void CprodEsc12(uint16_t* vectorIn , uint16_t* vectorOut , uint32t longitud )
 *
 *	r0 se cargara la direccion de memoria del 1er elemento del
    vector de entrada
    r1 se cargara la direccion de memoria del 1er elemento del
    vector de salida
    r2 guarda guarda el largo de los vectores
    r3 guarda guarda el valor escalar del multiplicador
    r4 guarda indice que recorre el vector
*/
asmprodEsc12:
    push {r4-r6,lr}  /* guardamos la direccion de retorno en la pila */
    ldr promedio,=0  // inicializacion de variable promedio 
    ldr indice_vector,longitud  // indice para el vector 
    subs indice_vector,1    //resta de 1 al indice ya que el cero se toma como una posicion 
    
loop1:
    ldr valoraux,[vectorIn,indice_vector,LSL] //creamos un valor auxiliar para capturar valores del vector de entrada y no modificacrlos
    Adds proemdio,valoraux  //sumamos todos los valores del vector  en la variable promedio sin modificar el valor del vector de entrada
    subs indice_vector,1 //reducimos el inidice del vector para iterar en el vector 
    bpl loop1           

    udiv promedio,longitud //dividimos la sumatoria de todos los valores del vector y lo dividimos entre la longitud para sacar el promedio
    mov indice_vector,longitud // retomamos el indice para interar de nuevo con los vectores
    subs indice_vector,1 //resta de 1 al indice ya que el cero se toma como una posicion 
    mov valoraux,0 //reiniciamos la variable auxiliar

loop2:

    ldr valoraux,[vectorIn,indice_vector,LSL] // tomamos valores del vector de entrada en la variable auxilar para no modificar los valores del vector de entrada 
    subs valoraux,promedio  // restamos el valor captado del vector de entrada ycon el promedio
    str valoraux,[vectorOut,inidice_vector,LSL] //ponemos el valor del vector de entrada con la resta del promedio al vector de salida 
    subs inidice_vector,1 //cambiamos el indice para iterar  en los vectores 
    bpl loop2
	POP {r4-r6,pc}   /* retorno */