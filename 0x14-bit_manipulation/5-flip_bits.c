#include "main.h"

/**
 * flip_bits - it computes the number of bits changed
 * @n: input number
 * @m: input number
 * Return: The number of bit to be replaced.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int p, count = 0;
	unsigned long int modern;
	unsigned long int num = n ^ m;

	for (p = 63; p >= 0; p--)
	{
		modern = num >> p;
		if (modern & 1)
			count++;
	}

	return (count);
}
