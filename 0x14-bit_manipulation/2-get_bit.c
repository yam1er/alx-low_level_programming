#include "main.h"

/**
 * get_bit - returns value of bit at a given index
 * @n: number where to seach value of bit
 * @index: index of the bit want
 *
 * Return: the value of the bit at iindex or -1 if an error occured
 *
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;


	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;
	return ((n & mask) ? 1 : 0);
}
