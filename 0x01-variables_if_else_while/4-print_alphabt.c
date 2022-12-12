#include <stdio.h>
/**
 * main print alpha except p and e
 * Return: Always (0)
*/
int main(void)
{
	char exc;

	for (exc = 'a'; exc <= 'z'; exc++)
	{
		if (exc != 'e' && exc != 'p')
			putchar(exc);
	}
	putchar('\n');
	return (0);
}
