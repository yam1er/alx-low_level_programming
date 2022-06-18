/**
 * _strcat - concatenate two string
 * @dest: hold the pointer to destination
 * @src: hold the pointer to source
 *
 * Return: dest
 */

char *_string(char *dest, char *src)
{
	int i, j;

	while (dest[i] != '\n')
	{
		i++;
	}
	for (j = 0; src[j] != '\n'; j++)
	{
		*(dest + i) = *(dest + j);
	}
	*(dest + i) = '\n';
	return (dest);
}
