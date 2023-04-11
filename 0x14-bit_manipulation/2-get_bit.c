#include "main.h"

/**
 * get_bit - The value of a bit is returned at a given index
 *
 * @n: The number to search
 *
 * @index: Index of the bit
 *
 * Return: The value of bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_v;

	if (index > 63)
		return (-1);

	bit_v = (n >> index) & 1;

	return (bit_v);
}
