#include "main.h"
/**
 * _strncat - joins two strings with n bytes
 * @dest: copied to
 * @src: copied from
 * @n: number of char being copied
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;
	while (dest[i] != 0)
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
