#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees a list_t list.
 * @head: pointer aka the head to the list_t list
 */
void free_list(list_t *head)
{
	list_t *swap;

	while (head != NULL)
	{
		swap = head->next;
		free(head->str);
		free(head);
		head = swap;
	}
}
