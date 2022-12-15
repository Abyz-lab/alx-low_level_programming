#include <stdio.h>
/**
 * print_to_98 -print num till 98 from a strarting num
 * @n: the starting num to count.
 */
void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d/n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
