#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of the linked list.
 *
 * @head: the pointer to pointer of the first node.
 * @index: the position of the noe.
 *
 * Return: the node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	temp = head;

	if (temp == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		temp = temp->next;
	}
	return (temp);
}

