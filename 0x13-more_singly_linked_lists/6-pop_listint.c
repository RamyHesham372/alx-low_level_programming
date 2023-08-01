#include "lists.h"

/**
 * pop_listint - delete the first node
 *  then return the value.
 *
 * @head: the pointer to pointer of the first node.
 *
 * Return: the value (n).
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *temp;

	temp = *head;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		n = (*head)->n;
		temp = temp->next;
		free(*head);
		*head = temp;
	}
	return (n);
}

