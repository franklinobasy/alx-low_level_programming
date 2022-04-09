#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;
	int a, b, c, d;
	
	for (i = 0; i < 10; i++)
	{
		for (j = 1; j < 9; j++)
		{
			/* first number group*/
			a = i / 10;
			b = i % 10;
			/* second number group*/
			c = j / 10;
			d = j % 10;
			if (a < c || (a == c &&  b < d))
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(32); /* space*/
				putchar(c + '0');
				putchar(d + '0');
				if (!(a == 9 && b == 8))
				{
					putchar(44);
					putchar(32);
				}
			}

		}
	}
	putchar('\n');
	return (0);
}
