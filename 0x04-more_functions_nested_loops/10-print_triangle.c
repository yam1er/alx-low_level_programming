#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: size of the triangle
 *
 * Return: nothing
 */

void print_triangle(int size)
{
	int tri_size, height, c;

	if (size > 0)
	{
	for (height = 0; height < size; height++)
	{
		for (tri_size = 0; tri_size < (size - height - 1); tri_size++)
		{
			_putchar(' ');
		}
		for (c = 0; c < height + 1; c++)
		{
			_putchar('#');
		}
		_putchar(10);
	}
	}
	else
		_putchar(10);
}
