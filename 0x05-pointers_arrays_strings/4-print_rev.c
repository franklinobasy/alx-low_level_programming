#include "main.h"

/**
 * print_rev - function that prints a string,
 * in reverse, followed by a new line.
 *
 * @s: string to reverse
 *
 * Return: void
 */
void print_rev(char *s)
{
	int l;

	l = 0;
	while (s[l])
		l++;
	l--;
	while (l >= 0)
	{
		_putchar(s[l]);
		l--;
	}
	_putchar('\n');
}
