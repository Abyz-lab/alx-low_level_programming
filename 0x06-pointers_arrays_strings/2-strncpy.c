#include "main.h"
/**
 * _strncpy - copies a string after n
 * @dest: copies from
 * @src: copies to
 * @n: num of char copied after
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
