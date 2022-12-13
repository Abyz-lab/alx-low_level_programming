#include <stdio.h>
/*,
 * main -prints the lowercase alphabet in reverse,
 * followed by a new line.
 * Return: Alwas (0)
 */
int main(void)
{
	char cr;

	for (cr = 'Z'; cr >= 'a'; cr--)
		putchar(cr);

	putchar('\n');
	return (0);
}
