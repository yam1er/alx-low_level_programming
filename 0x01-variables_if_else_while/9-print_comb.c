#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
		if (number == '9')
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
