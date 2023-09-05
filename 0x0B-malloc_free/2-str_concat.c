#include "main.h"

/**
 * str_concat - concatenates two function
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to the new string pointer if all good NULL else
 */


char *str_concat(char *s1, char *s2)
{
	char *conc_str;
	size_t len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	conc_str = (char *)malloc(len1 + len2 + 1);

	if (conc_str == NULL)
	{
		return (NULL);
	}
	strcpy(conc_str, s1);
	strcat(conc_str, s2);

	return (conc_str);

}
