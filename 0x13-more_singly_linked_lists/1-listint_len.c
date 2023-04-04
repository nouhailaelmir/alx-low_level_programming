#include <stdio.h>
#include "lists.h"
/**
 * listint_var - get var of list
 * Return: size_t
 * @v: list
 */
size_t listint_var(const listint_t *v)
{
	int var = 0;

	while (v)
	{
		var++;
		v = v->next;
	}
	return (var);
}
