#include "main.h"

/**
 * print_most_numbers - function that prints the numbers,
 * from 0 to 9, followed by a new line.
 * Do not print 2 and 4
 */
void print_most_numbers(void)
{
	int i;

	i = 0;
	while (i <= 9)
	{
		if ((i != 4) && (i != 2))
			_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
