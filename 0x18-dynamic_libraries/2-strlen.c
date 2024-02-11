#include "main.h"

/**
 * _strlen - length of a string
 * @s: string to count
 *
 * Return: length of character
 */

int _strlen(char *s)
{
	int counter;

	counter = 0;
	while (*s != '\0')
	{
		counter++;
		s++;
	}
	return (counter);
}
