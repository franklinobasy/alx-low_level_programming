/**
 * _isupper - checks for uppercase
 * @c: character to check
 * Return: 1 or 0
 */

int _isupper(int c)
{
	int test;
	
	if ((c >= 65) and (c <= 122))
		test = 1;
	else
		test = 0;
	return (test);
}
