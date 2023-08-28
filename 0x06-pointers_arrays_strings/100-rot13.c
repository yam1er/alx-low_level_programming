#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: string to encode
 *
 * Return: Nothing
 */

char *rot13(char *str)
{
	char *ptr = str;
	char base = 'a';
	char offset = 13;

	while (*ptr != '\0')
	{
		if (*ptr >= 'A' && *ptr <= 'Z')
		{
			base = 'A';
		}
		else if (!(*ptr >= 'a' && *ptr <= 'z'))
		{
			ptr++;
			continue;
		}
		*ptr = base + ((*ptr - base + offset) % 26);
		ptr++;
	}
	return (str);
}
