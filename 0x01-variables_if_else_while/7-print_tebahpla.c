#include <stdio.h>
#include <stdio.h>
/**
 * main - Enty point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char caracter;

	for (caracter = 'z'; caracter >= 'a'; caracter--)
	{
		putchar(caracter);
	}
	putchar('\n');
	return (0);
}
