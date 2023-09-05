#include "main.h"

/**
 * create_array - Create an array of chars, and initializes it with a char
 * @size: size of array
 * @c: caracter to fill a array
 *
 * Return: pointer of array if all good NULL else
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < size)
	{
		array[i] = c;
		i++;
	}
	return (array);
}
