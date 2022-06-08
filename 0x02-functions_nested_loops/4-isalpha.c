/**
 * _isalpha - checks for alphabetic character
 * @ch: character to check
 *
 * Return: 0 or 1
 */

int _isalpha(int ch)
{
	if ((ch >= 'a' && ch <= '2') || (ch >= 'A' && ch <= 'Z'))
		return (1);
	else
		return (0);
}
