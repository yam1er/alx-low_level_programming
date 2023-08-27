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
	char *orginalDest = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	i = 0;
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
