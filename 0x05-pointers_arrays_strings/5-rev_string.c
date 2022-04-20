/**
 * rev_string - function that reverses a string.
 * @s: sting to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	char str[];
	int l, i;
	
	str = *s;
	l = 0;
	while (s[l])
		l++;

	for (i = 0; i <= l; i++)
	{
		s[i] = str[l - i];
	}
}

