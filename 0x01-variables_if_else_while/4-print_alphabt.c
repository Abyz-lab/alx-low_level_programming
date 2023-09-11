#include <stdio.h>

/**
 * main - lowercase alphabet except q and e
 * Description: print the letters of the alphabet except e, q
 * Return: int 0
 */

int main(void)
{
	int i = 97;

	while (i < 123)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
		i++;
	}
	putchar(10);

	return (0);
}
