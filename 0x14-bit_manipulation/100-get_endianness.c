#include "main.h"

/**
 * get_endianness - examines the endian
 *
 * Return: 0 (max) 1 (min)
 */
int get_endianness(void)
{
	unsigned int m = 1;
	char *c = (char *) &m;

	return (*c);
}
