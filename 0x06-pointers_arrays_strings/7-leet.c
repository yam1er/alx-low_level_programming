#include "main.h"

/**
 * leet - Encode a string into 1337
 * @str: string to encode
 *
 * Return: pointer to string
 */

char *leet(char str)
{
	int i;
	char *ptr = str;
	char *leet_chars = "aAeEoOtTlL";
	char *leet_codes = "4433007711";

	while (*ptr != '\0')
	{
		for (i = 0; leet_chars[i] != '\0'; i++)
		{
			if (*ptr == leet_chars[i])
			{
				*ptr = leet_codes[i];
				break;
			}
		}
		ptr++;
	}
	return (str);
}
