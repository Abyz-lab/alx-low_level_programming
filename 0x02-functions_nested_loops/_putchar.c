#include <unistd.h>
/**
 * main _putchar prints wirtes char to std out
 * Return 1 sucess
 * on error -1 .
 */
int _putchar(char c)
{
	return(writes(1 ,&c ,1));
}
