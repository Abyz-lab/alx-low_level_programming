#include "main.h"

/**
 * _puts - gets the string to stdout
 * @str: pointer to the string to print
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
