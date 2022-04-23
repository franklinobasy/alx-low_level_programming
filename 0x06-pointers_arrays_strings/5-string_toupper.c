#include "main.h"

/**
 * string_toupper - Function that changes all
 * lowercase letter of a string to uppercase
 * @str - string to convert
 *
 * Return: char
 */

char *string_toupper(char *str);
{
	int count;

	count = 0;
	while (str[count])
	{
		if (str[count] != '\0')
			*(str + count) -= 32;
		count++;
	}
	return (str);
}
