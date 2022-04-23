#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @str: String to capitalize
 *
 * Return: pointer to str
 */

char *cap_string(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == " ")
		{
			if ((str[i + 1] >= 97) && (str[i + 1] <= 122))
			{
				*(str + (i + 1)) -= 32;
			}
		}
		count++;
	}
	return (str);
}
