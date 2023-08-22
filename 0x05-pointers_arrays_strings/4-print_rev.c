#include "main.h"

/**
 * print_rev - prints a strig in a reverse
 * @s: character to print
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int len;

	len = 0;
	while (s[len] != '\0')
		len++;
	len--;
	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
	_putchar(10);
}
