#include <stdio.h>
/**
 * main - print lowercase
 * Return: Always (0) Sucess
 */
int main(void)
{
	char lc;
	
	for (lc = 'a'; lc <= 'z'; lc++)
		putchar(lc);
	putchar('\n');
	return (0);
}
