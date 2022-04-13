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

	n = 0;
	while (n < 10)
	{
		for (i = 0; i < 10; i++)
		{
			result = n * i;
			if (result < 10)
			{
				_putchar(' ');
				_putchar('0' + result % 10);
			}
			else
			{
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			if (result == 81)
			{
				continue;
			}
			else
			{
				if (i == 9)
					continue;
				else
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
		n++;
	}
}
