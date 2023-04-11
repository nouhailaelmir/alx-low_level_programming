#include "main.h"
/**
 * clear_bit - Entry Point
 * @v: input
 * @index: index
 * Return: 0
 */
	int clear_bit(unsigned long int *v, unsigned int index)
{
	if (index > 63)
		return (-1);

	*v = *v & ~(1ul << index);
	return (1);
}
