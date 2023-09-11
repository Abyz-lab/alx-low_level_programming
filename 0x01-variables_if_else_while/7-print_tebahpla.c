#include <stdio.h>

/**
 * main - reverse ordered lower case 
 * Description: print the letters of the alphabet in reverse
 * Return: int 0
 */

int main(void)
{
	int i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar('\n');

	return (0);
}
