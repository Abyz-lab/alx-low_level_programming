#include <stdio.h>
/**
 * main - print singe digits of base 10 with fun putcahr.
 * Return Alaways (0)
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		putchar((n % 10) + '0');

	putchar('\n');
	return (0);
}
