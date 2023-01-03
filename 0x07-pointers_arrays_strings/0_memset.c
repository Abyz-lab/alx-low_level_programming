#include "main.h"
/**
 * memset - fun fills @n bytes memory area pointed to @s with @b
 * @n: memory pointed
 * @s: byte @b
 * @b: memory
 * Return: memeory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
