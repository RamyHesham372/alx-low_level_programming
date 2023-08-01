#include "lists.h"

/**
 * free_listint2 - frees all the nodes.
 *
 * @head: the pointer to pointer of the first node.
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = *head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
}
