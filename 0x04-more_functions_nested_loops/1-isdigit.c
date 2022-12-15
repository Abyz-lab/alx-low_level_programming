#include "main.h"
/** _isdigit - function that checks for a
 * digit (0 through 9).
 * @c - variable being checked
 * Return: 1 if trur, 0 if not true.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		_putchar(1);
	else
		_putchar(0);
}
