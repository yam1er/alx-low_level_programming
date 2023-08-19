#include "main.h"

/*
 * _isdigit(int c) - checks wether a character is digit or not
 * @c: character that eventually represent digit
 * Return: 1 wether or 0 if not
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}

	return (0);
}
