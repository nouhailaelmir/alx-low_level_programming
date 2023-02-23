#include "main.h"
#include <stdio.h>
/**
 * print_line - check the code for ALX School students.
 *@n: number of times to print.
 * Return: Always 0.
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		putchar('_');
	}
	putchar('\n');
}
