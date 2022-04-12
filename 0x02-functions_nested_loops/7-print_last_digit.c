#include "headers.h"
/**
 * print_last_digit - output last digit of a number
 * @n : number to check
 *
 * Return: number
 */
int print_last_digit(int n)
{
	int result;

	result = n % 10;
	if (n < 0)
		result *= -1;
	_putchar(result + '0');
	return (result);
}
