#include <stdlib.h>
#include "lists.h"
/**
 * add_expressint - add not at start
 * Return: pointer to express
 * @head: head express
 * @n: new express data
 */
listint_t *add_expressint(listint_t **head, const int n)
{
	listint_t *express;

	if (!head)
		return (0);
	express = malloc(sizeof(listint_t));
	if (!express)
		return (0);
	express->n = n;
	express->next = *head;
	*head = express;
	return (express);
}
