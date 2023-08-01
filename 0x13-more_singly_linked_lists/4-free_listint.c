#include "lists.h"

/**
 * free_listint - frees all the nodes.
 *
 * @head: the pointer of the first node.
 *
 * Return: void.
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	temp = head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
