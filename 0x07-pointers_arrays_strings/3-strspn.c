#include "main.h"

/**
 * _strspn - shows where we dont get the accepted set is last tobe found
 * @s: first set
 * @accept: second set to searched in first set
 * Return: the number of last bytes within first set where second set is found
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, bool;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		bool = 1;
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(s + i) == *(accept + j))
			{
				bool = 0;
				break;
			}
		}
		if (bool == 1)
			break;
	}
	return (i);
}
