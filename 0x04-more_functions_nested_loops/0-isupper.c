#include "main.h"
/**
 * isupper-  checks for uppercase
 * @c: character to be checked.
 * Return: 1 if 'c' is uppercase, 0 if 'c'.
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 98)
		return (1);
	else
		return (0);
}
