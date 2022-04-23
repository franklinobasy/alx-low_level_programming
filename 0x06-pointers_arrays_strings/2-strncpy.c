#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: destination
 * @src: source
 * @n: number of char to copy
 *
 * Return: pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count1;

	count1 = 0;
	while (count1 < n)
	{
		*(dest + count1) = *(src + count1);
		count1++;
	}

	return (dest);
}
