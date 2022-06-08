#include "main.h"

/**
 * main - check the code.
 *
 * Return Always 0.
 */
int main(void)
{
	int r;

	for (r = '!'; r <= '~'; r++)
	{
		r = _isalpha(r);
		_putchar(r + '0');
	}
	_putchar('\n');
	return (0);
}
