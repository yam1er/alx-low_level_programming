#include "main.h"

/**
 * puts2 - put other caracter
 * @str: hold de adress of the string to print
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i, size;


	for (i = 0; str[i] != 0; i++)
	{
		size++;
	}
	for (i = 0; i < size; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

}
