#include "main.h"


/**
 * _isalpha - Checks for alphabetic character
 * @c: The characterto be  checked
 * Return: 1 for the alphabetic cheracter or 0 for anything else
 */

int _isalpha(int c)

{

	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
