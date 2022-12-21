#include "main.h"

/**
 * print_rev -> printing a string in reverse
 * @s: the string to be printed in rev
 */

void print_rev(char *s)
{
	int h, i;

	i = 0;
	while(s[h] != '\0')
		h++;

	for (h = h - 1; h >= 0; h--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
