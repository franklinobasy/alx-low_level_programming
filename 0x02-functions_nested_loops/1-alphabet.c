#include "headers.h"
/**
 * print_alphabet - prints alphabet in lowercase, followed by a new line
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar(10);
}
