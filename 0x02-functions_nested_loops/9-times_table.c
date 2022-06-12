#include "main.h"

/**
 * times_table - show multiplicqtion table
 */
void times_table(void)
{
	int number, multiplication, res;

	for (number = 0; number <= 9; number++)
	{
		_putchar('0');

		for (multiplication = 1; multiplication <= 9; multiplication++;)
		{
			_putchar(',');
			_putchar(' ');

			res = number * multiplication;

			if (prod <= 9)
				_putchar(' ');

			else
				_putchar((res / 10) + '0');
			_putchar((res % 10) + '0');
		}
		_putchar((res % 10) + '0');
	}
}
