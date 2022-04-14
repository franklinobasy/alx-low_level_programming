#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 */
void more_numbers(void)
{
	int j;
	char i, n;

	i = 0;
	j = 0;
	while (j < 10)
	{
		for (i = 0; i <= 14; i++)
		{
			n = i;
			if (i >= 10)
			{
				_putchar('1');
				n = i % 10;
			}
			_putchar('0' + n);
		}
		_putchar('\n');
		j++;
	}
}
