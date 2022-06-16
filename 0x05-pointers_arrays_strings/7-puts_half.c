#include "main.h"

/**
 * puts_half - prints the second half of a string
 * @str: input string to print
 *
 * @*str: input pointer to string
 *
 */

void puts_half(char *str)
{
	int size, value;

	size = 0;
	for (value = 0; str[value] != 0; value++)
	{
		size++;
	}
	if (size % 2 == 0)
	{
		for (value = size / 2; value < size; value++)
		{
			_putchar(str[value]);
		}
	}
	else
	{
		for (value = (size / 2) + 1; value < size; value++)
			_putchar(str[value]);
	}
	_putchar('\n');
}
