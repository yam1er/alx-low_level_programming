#include <stdio.h>
#include "main.h"

/**
 * print_array - print n elements of an array of integer
 * @a: hold the address of array
 * @n: nomber of nteger to output
 *
 * Return: nothing
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if(i  <= n - 1)
			printf("%d ,", *(a + i));
		else
			printf("%d", *(a + i);
	}
	_putchar('\n');
}
