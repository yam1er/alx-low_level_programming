#include "main.h"

/**
 * main - print all arguments received
 * @argc: number of arguments recieved
 * @argv: names of arguments recieved
 *
 * Return: 1 if wrong and 0 if all good
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
