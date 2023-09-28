#include "main.h"

/**
 * print_binary - print binary representation of number
 * @n: number to represent like binary
 *
 * Return: Nothing
 */


void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	putchar((n & 1) ? '1' : '0');
}
