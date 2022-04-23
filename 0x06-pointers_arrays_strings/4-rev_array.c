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
	int count1, count2, temp

	count1 = 1;
	while (count1 < n)
	{
		count2 = 0;
		while (count2 < count1)
		{
			temp = *(a + count2);
			*(a + count2) = *(a + (count2 + 1));
			*(a + (count2 + 1)) = temp;
			count2++;
		}
		count1++;
	}
}
