#include "main.h"
#include <unistd.h>
#include <limits.h>
/**
 * print_binary - print an unsigned int in binary
 *
 * @a:
 *
 * Return: void
 */
void print_binary(unsigned long int a)
{
	unsigned long int print = 1ul << 63;
	char e = '0';

	while (!(print & a) && print != 0)
		print = print >> 1;

	if (print == 0)
		write(1, &e, 1);

	while (print)
	{
		if (print & a)
			e = '1';
		else
			e = '0';
		write(1, &e, 1);
		print = print >> 1;
	}
}
