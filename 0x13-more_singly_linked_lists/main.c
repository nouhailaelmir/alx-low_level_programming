#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
* main - check the code for Holberton School students.
*
* Return: Always 0.
*/
int main(void)
{
listint_t *head;
listint_t *head2;
listint_t *node;
head2 = NULL;
add_nodeint(&head2, 0);
add_nodeint(&head2, 1);
add_nodeint(&head2, 2);
add_nodeint(&head2, 3);
add_nodeint(&head2, 4);
add_nodeint(&head2, 5);
add_nodeint(&head2, 105);
add_nodeint(&head2, 100);
printf("size: %d\n", (int)print_listint_safe(head2));
head = NULL;
node = add_nodeint(&head, 0);
add_nodeint(&head, 1);
add_nodeint(&head, 2);
add_nodeint(&head, 3);
add_nodeint(&head, 4);
node->next = add_nodeint(&head, 105);
add_nodeint(&head, 100);
add_nodeint(&head, 102);
printf("size: %d\n", (int)print_listint_safe(head));
return (0);
}
