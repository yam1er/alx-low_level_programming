#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: string to copy on new memory space
 *
 * Return: pointer to the new pointer to string if all good NULL else
 */

char *_strdup(char *str)
{
	char *dup_str;
	size_t len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);

	dup_str = (char *)malloc(len + 1);

	if (dup_str == NULL)
	{
		return (NULL);
	}

	strcpy(dup_str, str);

	return (dup_str);
}
