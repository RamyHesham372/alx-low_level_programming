#include "lists.h"

/**
 * insert_nodeint_at_index - adds a new node to the specific index.
 *
 * @head: the pointer of the first node.
 * @idx: the new node position.
 * @n: the new node value.
 *
 * Return: the address of the node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	if (idx >= '0')
	{
		unsigned int i;
		listint_t *ptr;
		listint_t *temp = malloc(sizeof(listint_t));

		if (temp == NULL)
			return (NULL);
		temp->n = n;
		temp->next = NULL;
		ptr = *head;

		for (i = 0; i < idx - 1; i++)
		{
			ptr = ptr->next;
		}
		temp->next = ptr->next;
		ptr->next = temp;
		return (temp);
	}
	else
	{
		return (NULL);
	}
}

