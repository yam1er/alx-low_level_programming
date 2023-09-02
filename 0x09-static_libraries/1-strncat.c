#include "main.h"

/**
 * _strncat - write a function that concatenates two string
 * @dest: destination string
 * @src: source string
 * @n: numder of caracter to concatenate
 *
 * Return: a pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *originalDest = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;

	}
	*dest = '\0';
	return (originalDest);
}
