#include <stdio.h>

/**
* print_diagonal -  a function that draws a diagonal line on the terminal
*@n: number of times to be printed
*/

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < i; j++)
			{
				putchar(' ');
			}
			putchar('\\');
			putchar('\n');
		}
	}
}
