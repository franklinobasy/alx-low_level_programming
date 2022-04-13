#include <stdio.h>
#include "main.h"
/**
 * times_table - display times table
 */
void times_table(void)
{
	int n;
	int i;
	int result;

	n = 1;
	while (n < 10)
	{
		_putchar('0' + 0);
		for (i = 1; i < 10; i++)
		{
			result = n * i;
			_putchar(',');
			_putchar(' ');
			if (result < 10)
			{
				_putchar('0' + result % 10);
			}
			else
			{
				_putchar('0' + result / 10);
				_putchar('0' + result % 10);
			}
		}
		putchar('\n');
	}
}

