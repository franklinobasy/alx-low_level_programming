/**
 * print_sign - Evaluate sign of number
 * @n - number to be checked
 *
 * Return: 1, 0 or -1
 */
int print_sign(int n)
{
	int test;

	if (n > 0)
	{
		_putchar(43);
		test = 1;
	}
	else if (n == 0)
	{
		_putchar(48);
		test = 0;
	}
	else if (n < 0)
	{
		_putchar(45);
		test = -1;
	}
	return (test);
}
