#include "main.h"

/**
 * _strncpy - concatenates two strings
 * @dest: first string to concatenate
 * @src: second string to concatenate
 * @n: number of src to add to dest
 *
 * Return: dest pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *originalDest = dest;

	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	while (n > 0)
	{
		*dest = '\0';
		dest++;
		n--;
	}

	return (originalDest);
}
