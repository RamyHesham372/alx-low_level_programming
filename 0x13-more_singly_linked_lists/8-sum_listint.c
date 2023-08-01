#include "lists.h"

/**
 * sum_listint - returns the sum of the nodes values.
 *
 * @head: the pointer of the first node.
 *
 * Return: the sum.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp;

	temp = head;

	if (head == NULL)
		return (0);

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

