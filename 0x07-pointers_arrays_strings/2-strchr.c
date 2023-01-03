#include "main.h"
/**
 * _strchr - locates a letter in a string
 * Return: a pointer to the first letter found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	retur (NULL);
}
