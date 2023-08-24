#include "main.h"

/**
 * puts_half - print the second half of a string
 * @str: the string pointer
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int len, i;

	len = lenght(str); 
	for (i = 0; i < len; i++)
	{
		_putchar(*(str + i + len - 1));
	}
	if (len % 2 == 0)
		_putchar(*(str + i + len));
	_putchar(10);
}

/**
 * lenght - len of str
 * @str: pointer of a string
 * Return: len
 */

int lenght(char *str)
{
	int len;

	len = 0;
	while(*(str + len))
	{
		len++;
	}
	Return(len);
}
