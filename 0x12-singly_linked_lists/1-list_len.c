#include "lists.h"

/**
 * list_len - finds  number of elements in list_t list
 * @h: The linked list_t list
 * Return: number of elements in h
 */

size_t list_len(const list_t *h)
{
	int elements = 0;
	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
