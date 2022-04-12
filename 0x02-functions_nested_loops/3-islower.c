#include "headers.h"

/**
 * _islower - check if a character is lower caser
 * @c : character to check the case
 *
 * Return: throws 1 else throws 0
 */
int _islower(int c)
{
	if ((c >= 97) && (c <= 122))
		return (1);
	else
		return (0);
}
