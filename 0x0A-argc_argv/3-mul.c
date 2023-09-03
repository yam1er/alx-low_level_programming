#include "main.h"

/**
 * main - multiplication of two numbers
 * @argc: number of arguments
 * @argv: names of arguments
 *
 * Return: 1 if wrong 0 if all good
 *
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
