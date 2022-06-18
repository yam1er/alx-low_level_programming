/**
 * _strcpy - copy giving string to another string
 * @dest: the press papier pointer
 * @src: the source string
 *
 * Return: the press papier
 */

char *_strcpy(char *dest, char *src)
{
	int i;


	for (i = 0; src[i]; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = "\0";
	return (dest);
}
