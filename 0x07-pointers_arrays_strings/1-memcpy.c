#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: the value of the our src copied
 * @src: source memory area
 * @n: bytes need to be copied into
 * Return: the pointer of dest which is our copied file 
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) =  *(src + i);

	return (dest);
}
