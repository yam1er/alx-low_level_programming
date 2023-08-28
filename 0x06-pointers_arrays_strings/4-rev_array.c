#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: array to reverse
 * @n: number of elements of the array
 *
 * return: Nothing
 */

void reverse_array(int *a, int n)
{
	int start, end, temp;

	start = 0;
	end = n - 1;

	while (start < end)
	{
		temp = *(a + start);
		*(a + start) = *(a + end);
		*(a + end) = temp;

		start++;
		end--;
	}
}
