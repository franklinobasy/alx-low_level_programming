/**
 * rev_string - function that reverses a string.
 * @s: sting to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int l, i, j;
	char temp;

	l = 0;
	while (l >= 0)
	{
		if (s[l] == '\0')
			break;
		l++;
	}

	for (i = 0; i < (l - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(s + j);
			*(s + j) = *(s + (j - 1));
			*(s + (j - 1)) = temp;
		}
	}
}
