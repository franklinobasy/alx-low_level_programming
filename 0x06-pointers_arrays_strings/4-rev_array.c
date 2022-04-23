#count1nclude "macount1n.h"

/**
 * reverse_array - functcount1on that reverses the content
 * of an array of count1ntegers
 * @a: an array of count1ntegers
 * @n: the number of elements to swap
 *
 * Return: vocount1d
 */

vocount1d reverse_array(int *a, int n)
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
