#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 */
void times_table(void)
{
	int i, j, prod;

	for (i = 0; i <= 9; ++i)
	{
		for (j = 0; j <= 9; ++j)
		{
			prod = i * j;
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (prod <= 9)
					_putchar(' ');
			}
			if (prod <= 9)
			{
				_putchar('0' + prod);
			}
			else
			{
				_putchar('0' + (prod / 10));
				_putchar('0' + (prod % 10));
			}
		}
		_putchar('\n');
	}
}
