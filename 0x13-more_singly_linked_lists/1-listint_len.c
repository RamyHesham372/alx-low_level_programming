#include "lists.h"

/**
 * listint_len - travers all the nodes.
 *
 * @h: the pointer of the first node.
 *
 * Return: the number of the elements.
 */

size_t listint_len(const listint_t *h)
{
	int count = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		count++;
		temp = temp->next;
	}
	return (count);
}

