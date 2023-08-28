#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @str: sring to capitalize
 *
 * Return: string pointer
 */

char *cap_string(char *str)
{
	bool capitalize_next;
	char *ptr = str;

	capitalize_next = true;

	while (*ptr != '\0')
	{
		if (is_separator(*ptr))
		{
			capitalize_next = true;
		}
		else if (capitalize_next && *ptr >= 'a' && *ptr <= 'z')
		{
			*ptr = *ptr - ('a' - 'A');
			capitalize_next = false;
		}
		else
			capitalize_next = false;
		ptr++;
	}
	return (str);
}

/**
 * is_separator - check if the current string is capitalize
 * @c: caracter to check
 *
 * Return: Boolean
 */

bool is_separator(char c)
{
	int i;
	char separators[] = " \t\n,;.!?\"(){}";

	for (i = 0; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
		{
			return (true);
		}
	}
	return (false);
}
