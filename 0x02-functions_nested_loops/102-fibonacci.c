#include <stdio.h>

/**
 * main - Entry point
 * Desc: program that prints the first 50 Fibonacci
 * numbers, starting with 1 and 2
 *
 * Return: Always 0
 */
int main(void)
{
	long int i, prev, next, ans;

	prev = 1;
	next = 1;
	ans = prev + next;
	printf("%d, %d, ", next, ans);
	for (i = 1; i <= 48; i++)
	{
		prev = next;
		next = ans;
		ans = prev + next;
		if (i == 48)
			printf("%d\n", ans);
		else
			printf("%d, ", ans);
	}
	return (0);
}


