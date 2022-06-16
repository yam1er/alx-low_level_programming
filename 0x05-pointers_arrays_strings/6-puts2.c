#include "main.h"

/**
 * puts2 - put other caracter
 * @str: hold de adress of the string to print
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i;


	for (i = 0; i != 0; i + 2)
	{
		_putchar(str[i] + '0');
	}
}
