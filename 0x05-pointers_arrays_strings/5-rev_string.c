#include "main.h"

/**
 * rev_string - reverse string
 * @s: hold the address of first caracter
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i, j, size;
	char t;

	size = 0;
	for (i = 0; s[i] != 0; i++)
	{
		size++;
	}
	for (j = 0; j < size; j++)
	{
		t = s[j];
		s[j] = s[size - j - 1];
		s[size - j - 1] = t;
	}
}
