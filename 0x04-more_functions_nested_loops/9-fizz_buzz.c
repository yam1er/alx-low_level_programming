#include "main.h"

/**
 * main - prints number from 1 to 100
 *
 * Return: 0
 */

int main(void)
{
	int indice;

	for (indice = 1; indice <= 100; indice++)
	{
		if ((indice % 3 == 0) && (indice % 5 == 0))
		{
			printf("FizzBuzz ");
		}
		else if (indice % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (indice % 5 == 0)
		{
			if (indice != 100)
			{
				printf("Buzz ");
			}
			else
			{
				printf("Buzz");
			}
		}
		else
		printf("%d ", indice );
	}
	printf("\n");
	return (0);
}
