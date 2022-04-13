#include <stdio.h>

/**
 * main - Entry point
 * Desc:  rogram that finds and prints the first 98
 * Fibonacci numbers, starting with 1 and 2, followed
 * by a new line.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned int prev, next, ans;
	int i;
	
	i = 1;
	prev = 1;
	next = 2;
	printf("%u, %u, ", prev, next);
	while (i <= 97)
	{
		ans = prev + next;
		prev = next;
		next = ans;
		if (i == 97)
			printf("%u\n", ans);
		else
			printf("%u, ", ans);
		i++;
	}
	return (0);
}
