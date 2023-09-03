#include "main.h"

/**
 * main - print the name of the executable
 * @argc: number of argument
 * @argv: strings thst represent the arguments
 *
 * Return: 1 if somethings wrongs and 0 if all good
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
