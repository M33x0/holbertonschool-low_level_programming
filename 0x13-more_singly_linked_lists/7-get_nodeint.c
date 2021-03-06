#include "lists.h"

/**
 * get_nodeint_at_index - Find a node in a list
 * @head: first node in a list
 * @index: position of a the node to find (starting from 0)
 * Return: Node address
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	temp = head;
	if (temp == NULL)
	{
		return (NULL);
	}
	while (temp != NULL)
	{
		if (i == index)
		{
			return (temp);
		}
		i++;
		temp = temp->next;
	}
	return (temp);
}
