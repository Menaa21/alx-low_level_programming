#include <stdio.h>

/**
 * swap_int - Swaps the values of two integer.
 * @a: The first integer to be swapped.
 * @b: The second integer to be swapped.
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
/* the function that swaps the valus of two integers. */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
