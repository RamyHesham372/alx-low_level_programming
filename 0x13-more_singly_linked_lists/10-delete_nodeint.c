#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node of the specific index.
 *
 * @head: the pointer of the first node.
 * @index: the new node position.
 *
 * Return: 1 for success and -1 for failure.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr = *head, *temp = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		temp = NULL;
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (!temp || !(temp->next))
			return (-1);

		temp = temp->next;
	}
	ptr = temp->next;
	temp->next = ptr->next;
	free(ptr);
	ptr = NULL;
	return (1);
}

