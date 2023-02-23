#include "main.h"
#include <stdio.h>

/**
* print_numbers - print the numbers, from 0 to 9
* _putchar: A function that prints a number
* Return: Always sucessful
*/

void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
