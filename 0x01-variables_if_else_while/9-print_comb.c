#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		putchar(i + '0');
		putchar(44);
		putchar(32);
		i++;
	}
	putchar(10);
	return (0);
}
