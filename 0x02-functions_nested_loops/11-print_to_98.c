#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - print ordered number from n to 98
 * @n: number to use
 */
void print_to_98(int n)
{
	int val;

	val = n;
	while (val >= 98)
	{
		if (val == 98)
			printf("%d", val);
		else
			printf("%d, ", val);
		val--;
	}
}
