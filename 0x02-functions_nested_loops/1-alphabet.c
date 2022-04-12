#include <stdio.h>
#include "_putchar.h"
/**
 * print_alphabet - prints alphabet in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	int c;
        int i;

	c = 97;
	for (i = 1; i <= 26, i++)
	{
		_putchar(c);
		c++;
	}
	_putchar(10);
}
