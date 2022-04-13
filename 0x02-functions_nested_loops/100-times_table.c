#include "main.h"
/**
 * print_times_table - output times table
 * @n - specified number
 */
void print_times_table(int n)
{
	int product;
	int i;
	int j;

	if ((n >= 0) && (n <= 15))
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			for (j = 1; j <= n; j++)
			{
				product = i * j;
				_putchar(',');
				_putchar(' ');
				if (product < 10)
				{
					_putchar(' ');
					_putchar(product % 10 + '0');
				}
				else
				{
					_putchar(product / 10 + '0');
					_putchar(product % 10 + '0');
				}
			}
			putchar('\n');
		}
	}
}

