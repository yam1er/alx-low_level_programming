#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number = "0";

	for (number = "0"; number <= "10"; number++)
	{
		putchar(number);
	}
	putchar('\n');
	return (0);
}
