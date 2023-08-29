#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: Pointer to the string
 * @accept: Pointer to the bytes to search for
 *
 * Return: A pointer to the first occurence of a byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s)
	{
		a = accept;

		while (*a)
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
