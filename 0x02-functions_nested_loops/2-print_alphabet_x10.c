#include "main.h"
/**
 *prints 10 times the alphabet, in lowercase,followed by a new line.
 * Return: nothing
 */
void print_alphabet_x10(void)
{
	int seq = 0;
	char alp;

	while (seq++ <= 9)
	{
		for (alp = 'a'; alp <= 'z'; alp++)
			_putchar(alp);
		_putchar('\n');
	}
}
