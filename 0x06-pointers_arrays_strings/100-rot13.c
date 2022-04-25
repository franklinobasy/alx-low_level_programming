#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @str: String to encrypt
 *
 * Return: pointer to str
 */

char *rot13(char *str)
{
	int count1, count2;
	char alphabet[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rt13[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	count1 = 0;
	while (*(str + count1) != '\0')
	{
		count2 = 0;
		while (count2 < 52)
		{
			if (*(str + count1) == alphabet[count2])
			{
				*(str + count1) = rt13[count2];
				break;
			}
			count2++;
		}
		count1++;
	}
	return (str);
}
