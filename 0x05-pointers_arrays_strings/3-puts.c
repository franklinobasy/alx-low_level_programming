/**
 * _puts - function that prints a string,
 * followed by a new line, to stdout.
 * @s: sting to print
 *
 * Return: void
 */
void _puts(char *str)
{
	int counter;

	counter = 0;
	while (*(str + counter) != '\0')
	{
		_putchar(str[counter]);
		counter++;
	}
	_putchar('\n');
}
