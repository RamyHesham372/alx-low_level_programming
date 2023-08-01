#include "lists.h"

/**
 * add_nodeint_end - adds new nodes at the end.
 *
 * @head: the pointer of the first node.
 * @n: the value of the node.
 *
 * Return: the new address of the last node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{

	listint_t *temp = malloc(sizeof(listint_t));
	listint_t *ptr;

	ptr = *head;

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	while (ptr->next != NULL)
		ptr = ptr->next;

	ptr->next = temp;
	return (temp);
}

