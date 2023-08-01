#include "lists.h"

/**
 * add_nodeint - adds new nodes at the beginning.
 *
 * @head: the pointer of the first node.
 * @n: the value of the node.
 *
 * Return: the new address of the first node.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp = malloc(sizeof(listint_t));

	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = NULL;

	temp->next = *head;
	*head = temp;
	return (*head);
}

