#include "main.h"

/**
 * print_array - print n elements of an array of integer
 * @a: hold the address of array
 * @n: nomber of nteger to output
 *
 * Return: nothing
 */

void(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(a[i] + 'i');
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
}
