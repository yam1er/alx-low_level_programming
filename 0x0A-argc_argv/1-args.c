#include "main.h"

/**
 * main - print the number of arguments passed to it
 * @argc: number of arguments name of function include
 * @argv: name of arguments pass to the function
 *
 * Return: print number of arguments passed followed by new line
 */

int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
