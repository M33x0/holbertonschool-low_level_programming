#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

size_t print_listint(const listint_t *h)
{
	unsigned int number_of_nodes = 0;

	while (h != NULL)
	{
		number_of_nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (number_of_nodes);
}
