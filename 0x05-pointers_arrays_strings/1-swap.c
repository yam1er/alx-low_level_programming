#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: first integers
 * @b: second integers
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
