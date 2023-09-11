#include <stdio.h>
/**
 * main - main block
 * Description: Use only `putchar` to display letters in lowercase.
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
