#include "main.h"

/**
 * main - number of coin to make change
 * @argc: number of argument
 * @argv: names of arguments
 *
 * Return: 1 if wrong 0 if all things good
 *
 */

int main(int argc, char *argv[])
{
	int numCoins, count, i, cents;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Erreur\n");
		return (1);
	}

	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	numCoins = sizeof(coins) / sizeof(coins[0]);

	count = 0;

	for (i = 0; i < numCoins; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			count++;
		}

	}
	printf("%d\n", count);
	return (0);
}
