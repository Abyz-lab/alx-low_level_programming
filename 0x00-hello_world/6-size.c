#include <stdio.h>

/**
 * main - Enrty Point
 * Return: Always (0) Sucess
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("Size of an char: %lu byte(s)/n"), (long unsigned int)sizeof(a));
	printf("Size of an int: %lu bytes(s)/n"), (long unsigned int)sizeof(b));
	printf("Size of an long int: %lu bytes(s)/n"), (long unsigned int)sizeof(c));
	printf("Size of an long long int: %lu bytes(s)/n"), (long unsigned intg)sizeof(d));
	printf("Size of an float: %lu bytes(s)/n"), (long unsigned int)sizeof(f));
	return (0);
}

