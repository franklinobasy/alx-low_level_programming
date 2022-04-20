#include "main.h"

/**
 * _strcpy - function that copies the string pointed to
 * by src, including the terminating null byte (\0),
 * to the buffer pointed to by dest
 *
 * @dest: destination
 * @src: source
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int count;

	count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
