#include "main.h"

/**
 * _strcat - appends src string to dest
 * @dest: fisrt string
 * @src: last string to append to dest
 *
 * Return: a pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int i, len;

	len = 0;
	while (*dest++ != '\0')
	{
		len++;
	}
	i = 0;
	while (src[i] != '\0')
	{
		dest[len] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);

}
