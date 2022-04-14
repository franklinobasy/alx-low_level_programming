#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 */
void more_numbers(void)
{
	int i, j, n;

	i = 0;
	j = 0;
	while (j < 10)
	{
		while (i <= 14)
		{
			n = i;
			if (i > 9)
			{
				_putchar('1');
				n = i % 10;
			}
			_putchar('0' + n);
			i++;
		}
		_putchar('\n');
		j++;
	}
}
