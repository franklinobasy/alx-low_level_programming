#include "main.h"

/**
 * reverse_array - function that reverses the content
 * of an array of itegers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: vocount1d
 */

void reverse_array(int *a, int n)
{
	int count1, count2, temp;

	for (count1 = 1; count1 < n; count1++)
	{
		for (count2 = 0; count2 < (n - count1); count2++)
		{
			temp = *(a + count2);
			*(a + count2) = *(a + (count2 + 1));
			*(a + (count2 + 1)) = temp;
		}
	}
}
