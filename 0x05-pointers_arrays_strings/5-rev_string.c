/**
 * rev_string - function that reverses a string.
 * @s: sting to reverse
 *
 * Return: void
 */
void rev_string(char *s)
{
	int l, i;
	
	l = 0;
	while (s[l])
		l++;

	char str[l] = *s;

	for (i = 0; i <= l; i++)
	{
		s[i] = str[l - i];
	}
}

