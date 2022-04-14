#include "main.h"

/**
 * print_numbers - function that prints the numbers,
 * from 0 to 9, followed by a new line.
 */
void print_numbers(void)
{
	int i;

	i = 48;
	while (i < 58)
	{
		_putchar(48);
		i++;
	}
	_putchar('\n');
}
