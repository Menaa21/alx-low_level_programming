#include "main.h"

/**
 * set_bit - it sets the value of the bit at a given index number to 1.
 * @n: pointer for the number for change.
 * @index: index for the bit that sets to 1.
 * Return: depend condition.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
