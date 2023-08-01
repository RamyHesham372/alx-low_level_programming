#include "lists.h"

/**
 * print_listint - prints all the elements.
 *
 * @h: the pointer of the first node.
 *
 * Return: the number of the elements.
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}

