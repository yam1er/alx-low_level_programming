#include "main.h"

/**
 * puts2 - Print every other character of string
 * @str: point to string
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	int len;

	len = 0;
	while (*(str + len) != '\0')
	{
		if (len % 2 == 0)
		_putchar(*(str + len));
		len++;
	}
	_putchar(10);
}
