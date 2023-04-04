#include <stdio.h>
#include "lists.h"
/**
 * listint_hom - get len of list
 * Return: size_t
 * @h: list
 */
size_t listint_hom(const listint_t *h)
{
	int hom = 0;

	while (h)
	{
		hom++;
		h = h->next;
	}
	return (hom);
}
