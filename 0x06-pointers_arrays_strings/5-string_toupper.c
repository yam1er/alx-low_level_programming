#include "main.h"

/**
 * string_toupper - changes all letters of a string to uppercase
 * @str: string to modified
 *
 * Return: the string pointer
 */

char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		if (*ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
		}
		ptr++;
	}
	return (str);
}
