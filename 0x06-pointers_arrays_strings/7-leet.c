#include "main.h"
/**
 * leet - function that encodes a string into 1337
 * @str: string to encode
 *
 * Return: pointer to string
 */

char *leet(char *str)
{
	int count1, count2;
	char c[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int code[] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};

	count1 = 0;
	while (str[count1] != '\0')
	{
		count2 = 0;
		while (count2 < 10)
		{
			if (str[count1] == c[count2])
			{
				*(str + count1) = code[count2];
				break;
			}
			count2++;
		}
		count1++;
	}
	return (str);
}
