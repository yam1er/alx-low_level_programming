#include "main.h"

/**
 * set_bit - set the value of a bit to 1 at a given index
 * @n: pointer to the number to explore
 * @index: index in which we will set the bit
 *
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	mask <<= index;

	*n |= mask;

	return (1);
}
