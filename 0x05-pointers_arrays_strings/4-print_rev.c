#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: hold the first caracter adress
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i, size, j;

	size = 0;
	for (i = 0; s[i] != 0; i++)
	{
		size++;
	}
	for (j = size; j <= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
