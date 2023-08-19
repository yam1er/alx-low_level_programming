#include "main.h"

/**
 * print_most_numbers - print digit without 2 and 4
 *
 * Return: nada
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		if ((i != 52) && (i != 54))
		{
			_putchar(i);
		}
	}
	_putchar(10);
}
