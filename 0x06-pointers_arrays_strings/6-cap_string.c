#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @str: String to capitalize
 *
 * Return: pointer to str
 */

char *cap_string(char *str)
{
	int i, j, found;
	int sep[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	i = 0;
	found = 0;
	if ((str[i] >= 97) && (str[i] <= 122))
		*(str + i) -= 32;

	i++;

	while (str[i] != '\0')
	{
		j = 0;
		while (j < 13)
		{
			if (sep[j] == str[i])
			{
				found = 1;
				break;
			}
			j++;
		}
		if ((found == 1) && ((str[i + 1] >= 97) && (str[i + 1] <= 122)))
			*(str + (i + 1)) -= 32;
		i++;
		found = 0;
	}
	return (str);
}
