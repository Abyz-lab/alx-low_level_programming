#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: integer to swap
 * @b: integer to swap
 */

void swap_int(int *a, int *b)
{
	int tempo = *a;
	*a = *b;
	*b = tempo;
}
