#include "main.h"

/**
 * clear_bit - it sets the value of the bit to zero.
 * @n: pointer for the number to change.
 * @index: index of bit to clear.
 * Return: depends on the condition.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
