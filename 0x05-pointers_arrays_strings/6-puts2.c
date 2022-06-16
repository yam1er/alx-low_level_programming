#include "main.h"

/**
 * puts2 - put other caracter
 * @str: hold de adress of the string to print
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i, j;


	for (i = 0; str[i] != 0; i++)
	{
		size++;
	}
	for (j = 0; j < size; += 2)
	{
		_putchar(str[j]);
	}
	_putchar('\n');

}
