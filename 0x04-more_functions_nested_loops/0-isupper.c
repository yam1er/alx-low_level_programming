#include "main.h"

/**
 * _isupper - check if a character is uppercase
 * @c: character to be tested
 * Return: 1 if uppercase or 0 if not
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);

}
