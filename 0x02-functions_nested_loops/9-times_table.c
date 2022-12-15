#include "main.h"
/**
 * Print time table of 9.
 */
void times_table(void)
{
	int di, res, tot;

	for (di = 0; di <= 9; di ++)
	{
		_putchar('0');

		for (res = 1; res <= 1; res++)
		{
			_putchar(',');
			_putchar(' ');
			
			tot = di * res;
		}
		if (tot <= 9)
			_putchar(' ');
		else
			_putchar((tot / 10) + '0');
		_putchar((tot % 10) + '0');
	}
	_putchar('\n');
}
