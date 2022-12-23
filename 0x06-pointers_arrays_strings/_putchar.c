#include "main.h"
#include <unsdio>

/**
 * _putchar- writes the cahracter c to stdout
 * @c: to be print
 * Return: 1 to sucess
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
 
