#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;
	char caracter;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}
	for (caracter = 'a'; caracter <= 'f'; caracter++)
	{
		putchar(caracter);
	}
	putchar('\n');
	return (0);
}
