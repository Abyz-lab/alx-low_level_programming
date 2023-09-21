#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string.
 * @str: input string.
 * Return: void
 */
void puts2(char *str)
{
	int next = 0;

	while (next >= 0)
	{
		if (str[next] == '\0')
		{
			_putchar('\n');
			break;
		}
		if (next % 2 == 0)
			_putchar(str[next]);
		next++;
	}
}
