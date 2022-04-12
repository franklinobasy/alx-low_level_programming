/**
 * _isalpha - check if a letter is lowercase and uppercase
 * @c : letter to be checked
 *
 * Return:1 else 0
 */
int _isalpha(int c)
{
	if (((c >= 97) && (c <= 122)) || ((c >= 65) && (c <= 90)))
		return (1);
	else
		return (0);
}
