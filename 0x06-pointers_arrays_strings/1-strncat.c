#include "main.h"

/**
 * _strncat- function that concantenantes two strings
 * @dest: destination
 * @src: source
 * @n: n bytes
 *
 * Return: pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int count1, count2;

	count1 = 0;
	while (*(dest + count1))
	{
		if (*(dest + count1) != '\0')
		{
			count1++;
		}
	}

	count2 = 0;
	while (*(src + count2))
	{
		if (count2 < n)
		{
			*(dest + count1) = *(src + count2);
		}
		count1++;
		count2++;
		if (count2 == n)
		{
			break;
		}
	}
	return (dest);
}
