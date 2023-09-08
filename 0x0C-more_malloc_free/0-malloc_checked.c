#include "main.h"

/**
 * malloc_checked - Allocate memory using malloc
 * @b: memory space to allocaed
 *
 * Return: the space allocated pointer or NULL if something's wrong
 */
void *malloc_checked(unsigned int b)
{
	void *space;

	space = malloc(b);
	if (space == NULL)
	{
		exit(98);
	}
	return (space);
}
