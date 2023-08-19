#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the caracter \ should be printed
 *
 * Return: nothing
 */

void print_diagonal(int n)
{
	int lenght, space;

	if (n > 0)
	{
		for (len = 0; len < n; lenght++)
		{
			for (space = 0; space < lenght; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			if (lenght == (n - 1))
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
