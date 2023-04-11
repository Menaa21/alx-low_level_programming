#include "main.h"

/**
 * binary_to_uint - binary number changes to an unsigned int
 *
 * @b: The string contains the binary number.
 *
 * Return: The number to be converted.
 */
unsigned int binary_to_uint(const char *b)
{
	int m;
	unsigned int di_val = 0;

	if (!b)
		return (0);
	for (m = 0; b[m]; m++)
	{
		if (b[m] < '0' || b[m] > '1')
			return (0);
		di_val = 2 * di_val + (b[m] - '0');
	}
	return (di_val);
}
