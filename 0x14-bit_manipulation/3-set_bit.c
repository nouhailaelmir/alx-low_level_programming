#include "main.h"
/**
 * set_bit - entry point
 * @a: input
 * @idx: index
 *
 * Return: 1 for success, -1 for failure
 */
int set_bit(unsigned long int *a, unsigned int idx)
{
	if (idx > 63)
		return (-1);

	*n = ((1UL << idx) | *a);
	return (1);
}
