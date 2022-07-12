/**
 * _strlen - function that returns the length of a string.
 * @s: string to check
 *
 * Return: Integer
 */
int _strlen(char *s)
{
	int counter;

	counter = 0;
	while (*(s + counter) != '\0')
		counter++;

	return (counter);
}
