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
			_putchar('0' + result);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
		n++;
	}
}
