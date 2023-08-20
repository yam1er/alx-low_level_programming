#include "main.h"

/**
 * print_square - print a square, followed by a new line
 * @size: the size of the square
 *
 * Return: nothing
 */

void print_square(int size)
{
	int len_size, width_size;

	if (size > 0)
	{
		for (len_size = 0; len_size < size; len_size++)
		{
			for (width_size = 0; width_size < size; width_size++)
			{
				_putchar('#');
			}
			_putchar(10);
		}
	}
	else
		_putchar(10);
}
