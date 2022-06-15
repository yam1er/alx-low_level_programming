#include "main.h"

/**
 * _puts - function that prints a string
 * @str: hold the first address of string
 *
 * Return: void
 */

void _puts(int *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
	{
		_putchar(str[i] + '0');
	}
	_putchar('\n');
	return (0);
}
