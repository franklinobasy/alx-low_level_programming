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
	unsigned long long prev, next, ans;
	int i;

	i = 1;
	prev = 1;
	next = 2;
	printf("%llu, %llu, ", prev, next);
	while (i <= 97)
	{
		ans = prev + next;
		prev = next;
		next = ans;
		if (i == 97)
			printf("%llu\n", ans);
		else
			printf("%llu, ", ans);
		i++;
	}
	return (0);
}
