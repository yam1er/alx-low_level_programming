#include "main.h"

/**
 * main - add positive numbers
 * @argc: numbers of arguments
 * @argv: arguments names
 *
 * Return: 1 if wrong things 0 if all good
 */

int main(int argc, char *argv[])
{
	int sum, num, i, j;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		num = atoi(argv[i]);

		if (num <= 0)
		{
			printf("Error\n");
			return (1);
		}

		sum += num;
	}
	printf("%d\n", sum);
	return (0);
}
