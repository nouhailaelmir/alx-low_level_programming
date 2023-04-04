#include <stdio.h>
#include "lists.h"
/**
 * print_listint - print list
 * Return: size_t
 * @v: list
 */
size_t print_listint(const listint_t *v)
{
	int var = 0;

	while (v)
	{
		var++;
		printf("%d", v->n);
		v = v->next;
		printf("\n");
	}
	return (var);
}
