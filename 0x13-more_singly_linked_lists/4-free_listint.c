#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: pointer aka the head to the list_t list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
