#include "main.h"

/**
 * rev_strin - Reverses a string
 * @s: point on string
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int len, i;
	char temp;

	len = 0;
	while (s[len])
	{
		len++;
	}
	for (i = 0; i < (len / 2); i++)
	{
		temp = *(s + i);
		*(s + i) = *(s + (len - 1 - i));
		*(s + (len - 1 - i)) = temp;
	}
}
