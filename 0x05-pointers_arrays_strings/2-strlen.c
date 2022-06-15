/**
 * _strlen - funtion that return the length of a string
 * @s: that first caracter pionter
 *
 * Return: the size of string
 */

int _strlen(char *s)
{
	int size, i;

	size = 0;

	for (i = 0; *s != 0; i++)
	{
		size++;
	}

	return (size);
}
