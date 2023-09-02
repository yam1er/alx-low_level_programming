#include "main.h"

/**
 * _strcmp - Compare two string
 * @s1: first string to compare
 * @s2: second string to compare
 *
 * Return:
 *		0 if s1 == s2
 *		negative number if s1 < s2
 *		positive number if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
