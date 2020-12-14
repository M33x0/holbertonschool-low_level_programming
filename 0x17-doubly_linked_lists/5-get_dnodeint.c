#include "lists.h"
/**
 * get_dnodeint_at_index - finds a specific node of a linked list
 * @head: pointer to the beginning of the list
 * @index: index of the node to retrieve
 * Return: pointer to the indexed node, or NULL on failure
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx;

	idx = 0;
	while (head)
	{
		if (idx == index)
		{
			return (head);
		}
		head = head->next;
		idx++;
	}
	return (NULL);
}
