#include "main.h"
/**
 * print_alphabet_x10 - fonction that return 10 times a lowercase alphabet
 */
void print_alphabet_x10(void)
{
	char ch;
	int compter;

	for (compter = 0; compter < 10; compter++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
	}
}
