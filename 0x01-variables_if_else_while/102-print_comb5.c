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
	int k;
	int w;
	
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 9; j++)
		{
			for (k = 0; k < 10; k++)
			{
				for (w = 1; w < 10; w++)
				{
					if (i != k && j != w)
					{
						putchar(i + '0');
						putchar(j + '0');
						putchar(32);
						putchar(k + '0');
						putchar(w + '0');
						if (i == 9 && j == 8 && k == 9 && w == 9)
							putchar(10);
						else
						{
							putchar(44);
							putchar(32);
						}
					}
				}
			}
		}
	}
	return (0);
}
