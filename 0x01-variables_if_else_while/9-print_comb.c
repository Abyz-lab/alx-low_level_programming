#include <stdio.h>
/**
 * main - print all pos combination of single digit num
 * Return: Always (0)
 */
int main(void)
{
	int sd;

	for (sd = 0; sd <= 9; sd++)
	{
		putchar((sd % 10) + '0');
		if (sd ==9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
