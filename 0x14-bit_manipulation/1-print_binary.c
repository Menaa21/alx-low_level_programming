#include "main.h"

/**
 * print_binary - prints the binary representation of a decimal number.
 *
 * @n: number in binary.
 */
void print_binary(unsigned long int n)
{
	int m, t = 0;
	unsigned long int modern;

	for (m = 63; m >= 0; m--)
	{
		modern = n >> m;

		if (modern & 1)
		{
			_putchar('1');
			t++;
		}
		else if (t)
			_putchar('0');
	}
	if (t == 0)
		_putchar('0');
}
