#include "main.h"

/**
 * print_rev -> printing a string in reverse
 * @s: the string to be printed in rev
 */

void print_rev(char *s)
{
	int h, i;

	i = 0;
	while(s[i] != '\0')
		h++;

	for (i = i - 1; i >= 0; i--)
	{
		_putchar(s[h]);
	}
	_putchar('\n');
}
