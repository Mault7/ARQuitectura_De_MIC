#include "../inc/examen.h"

/* TIP: acceder a la imagen como si fuera un vector: image[indice] */
uint32_t avgImageC (uint16_t * image, uint8_t n, uint8_t m)
{
	uint32_t i = 0;
	uint32_t j = 0;
	uint32_t media = 0;
	uint32_t longitud=n*m;

	for (i = 0; i < m; i++) {
		for (j = 0; j < n; j++) {

			uint32_t x = *(image + (i * n) + j);

			media+=x;


		}

	}
	media=media/longitud;
return media;
}
