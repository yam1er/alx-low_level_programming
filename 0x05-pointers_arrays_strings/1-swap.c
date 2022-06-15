/**
 * swap_int - function that swaps the value of two integers
 * @a: hold the adress of first integer
 * @b: hold the address of second integer
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
