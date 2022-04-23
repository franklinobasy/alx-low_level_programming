#include "main.h"

/**
 * reverse_array - function that reverses the content 
 * of an array of integers
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j, temp;

	for (i = 1; i < n; i++)
	{
		for (j = 0; j < (n - i); j++)
		{
			temp = *(a + j);
			*(a + j) = *(a + (j + 1));
			*(a + (j + 1)) = temp;
		}
	}
}
