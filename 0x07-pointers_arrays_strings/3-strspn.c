#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to the string
 * @accept: Pointer to the character to be matched
 *
 * Return: The number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0;
	int is_accept = 1;
	char *a;

	while (*s && is_accept)
	{
		a = accept;
		is_accepted = 0;

		while (*a)
		{
			if (*s == *a)
			{
				is_accept = 1;
				break;
			}
			a++;
		}
		if (is_accept)
		{
			length++;
			s++;
		}
	}
	return (length);
}
