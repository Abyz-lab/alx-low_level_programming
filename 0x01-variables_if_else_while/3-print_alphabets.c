#include <stdio.h>
/**
 * main - lowercase and uppercase alphabet
 * Description: print the letters of the aphabet in lower then in uppercase and 
 lower
 * Return: int 0
 */

int main(void)
{
	int i, j;
	i = 97;
	j = 65;

	while (i < 123)
	{
		putchar(i);
		i++;
	}

	while (j < 91)
	{
		putchar(j);
		j++;
	}

	putchar('\n');

	return (0);
}
