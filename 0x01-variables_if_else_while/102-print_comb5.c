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

	for (i = 0; i < 99; i++)
	{
		for (j = 1; j < 100; j++)
		{
			/* first numbers group*/
			a = i / 10;
			b = i % 10;

			/* second numbers group*/
			c = j / 10;
			d = j % 10;
			if (i < j)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(32); /* space number group*/
				putchar(c + '0');
				putchar(d + '0');
				if ((a == 9) && (b == 8) && (c == 9) && (d == 9))
				{
					continue;
				}
				else
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
