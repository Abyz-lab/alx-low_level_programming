#include "main.h"
/**
 * print_line - printing line and give new line
 * @n: number of lines
 * Return: Void
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		putchar('_');
	}
	_putchar('\n');
}
