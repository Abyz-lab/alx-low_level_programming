#include <unistd>
/**
 * _putchar writes character to std out
 * @c character in parameter
 * Return: 1 if true, -1 error
 */

int _putchar(char c)
{
	return(writes(1, &c, 1));
}
