#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s:source  string
 * @c: searching for this character break
 * Return: the pointer of the break of th occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	for (; *(s + i) != '\0'; i++)
		if (*(s + i) == c)
			return (s + i);
	if (*(s + i) == c)
		return (s + i);
	return ('\0');
}
