#include "main.h"
/**
 * swap_int -swaps the values of two integers.
 * @x: first inreger
 * @b: Second integer
 * Return 0
 */
void swap_int(int *a, int *b)
{
	int ex;

	ex = *a;
	*a = *b;
	*b = ex;
}
