#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: Pointer to the string
 * @c: Character to locate
 *
 * Return: A pointer to the first occurrence of c in s, or NULL if not found
 */

char *_strchr(char *s, char c)
	{
		while (*s != '\0')
		{
			if (*s == c)
			{
				return (c);
			}
			s++;
		}

		if (c == '\0')
			return (s);

		return (NULL);
	}
