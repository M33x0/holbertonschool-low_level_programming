#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_list - prints all elements of a list_t
 * @h: list_t list
*/
size_t print_list(const list_t *h)
{
	int elements = 0;

	while (h != NULL)
	{
		elements++;
		if (h->str != NULL)
		{
			printf("[%d] ", h->len);
			printf("%s\n", h->str);
		}
		else
		{
			printf("[0] ");
			printf("(nil)\n");
		}
		h = h->next;
	}
	return (elements);
}
