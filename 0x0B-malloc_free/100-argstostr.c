#include "main.h"
/**
 * argstostr - concatenates all the arguments of the program
 * @ac: number of args
 * @av: array of string
 * Return: a pointer to new string or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	int len, i;
	char *new_str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		if (av[i] != NULL)
		{
			len += strlen(av[i] + 1);
		}
	}

	new_str = (char *)malloc(len + 1);

	if (new_str == NULL)
	{
		return (NULL);
	}

	new_str[0] = '\0';
	for (i = 0; i < ac; i++)
	{
		new_str = strcat(new_str, av[i]);
		new_str = strcat(new_str, "\n");
	}
	return (new_str);
}
