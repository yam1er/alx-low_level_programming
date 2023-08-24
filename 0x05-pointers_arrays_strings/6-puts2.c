#include "main.h"

/**
 * puts2 - Print every other character of string
 * @str: point to string
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str += 2;
	}
	_putchar(10);
}
