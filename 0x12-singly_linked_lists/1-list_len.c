#include <stdlib.h>
#include "lists.h"

/**
 * list_len - prints the length.
 *
 * @h: pointer to the node.
 *
 *Return: number of elements.
 */

size_t list_len(const list_t *h)
{
	int my_counter = 0;

	while (h != NULL)
	{
		my_counter++;
		h = h->next;
	}

	return (my_counter);
}

