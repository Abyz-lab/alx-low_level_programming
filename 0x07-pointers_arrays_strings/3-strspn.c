#include "main.h"
/**
 * _strspn - gets length
 * @s : firstbpart
 * @accept: bytes of
 * Return : the n of byte
 */
unsigned int _strspn(char *s, char *accept)
{
	int p = 0, x, y;
	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] != 32)
		{
			for (y = 0; accept[y] != '\0'; y++)
			{
				if (s[x] == accept[y])
					p++;
			}
		}
			else
			{
				return (p);
			}
	}
			return (p);
}

