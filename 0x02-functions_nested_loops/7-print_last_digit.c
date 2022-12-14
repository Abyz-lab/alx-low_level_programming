#include "main.h"
/**
 * print_last - print last digit of n.
 * @n-the numbe rin oarameter
 * Return:the last digit.
 */
int print_last_digit(int n)
{
	int lad = n % 10;

	if (lad < 0)
		lad = lad * (-1);
	putchar(lad + '0');

	return (lad);
}
