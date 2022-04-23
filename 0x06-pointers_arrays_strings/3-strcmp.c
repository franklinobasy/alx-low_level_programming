#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int result, count;

	count = 0;
	result = 0;

	while (s1[count] && (s1[count] != '\0'))
	{
		if ((s1[count] > s2[count]) || (s1[count] < s2[count]))
		{
			result = s1[count] - s2[count];
			break;
		}
		count++;
	}
	return (result);
}
