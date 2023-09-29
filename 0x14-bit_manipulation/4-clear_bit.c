#include "main.h"

/**
 * clear_bit - set the value of a bit to 0
 * @n: pointer thqt pointer
 * @index: index wherre we will do the change
 *
 * Return: 1 if worked or -1 if an error occured
 */


int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask <<= index;

	mask = ~mask;

	*n &= mask;

	return (1);
}
