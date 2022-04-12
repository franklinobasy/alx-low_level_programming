#include <stdio.h>
#ifndef MAIN_H_
#define MAIN_H_

void print_alphabet(void);

#endif

/**
 * print_alphabet - To print all alphabets in lower case
 *
 * Return: void null
 */

void print_alphabet(void)
{
	int c;
	int i;

	c = 97;
	for (i = 1; i <= 26; i++)
	{
		putchar(c);
		c++;
	}
	putchar(10);
}
