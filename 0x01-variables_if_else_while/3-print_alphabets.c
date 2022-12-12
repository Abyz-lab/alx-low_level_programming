#include <stdio.h>
/**
 * main - Print alph lower and upper cadse
 * Return: Always (0) Sucess
 */
int main(void)
{
	char bo;

	for (bo = 'a'; bo <= 'z'; bo++);
		putchar(bo);

	for (bo = 'A'; bo <= 'Z'; bo++);
		putchar(bo);

	putchar('\n');

	return (0);
}
