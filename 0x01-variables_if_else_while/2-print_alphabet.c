#include <stdio.h>
#include <stdlib.h>
/**
 * main-Entry point
 * return (0) for success
 */
int main(void)
{
	/**
	 * print lowercase alphabet out
	 */
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
		putchar('\n');
	}
	return (0);
}
