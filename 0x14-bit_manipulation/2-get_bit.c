#include "main.h"

/**
* get_bit - returns the value of a bit at an index in a decimal number
* @a: input
* @idx: index
*
*
* Return: 0
*/
int get_bit(unsigned long int a, unsigned int idx)
{
	int val;

	if (idx > 63)
		return (-1);

	val = (a >> idx) & 1;

	return (val);
}

