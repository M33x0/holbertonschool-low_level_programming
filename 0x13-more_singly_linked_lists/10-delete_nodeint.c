#include "lists.h"

/**
 * delete_nodeint_at_index - Delete a node at a given position
 * @head: first node address
 * @index: position of the node to delete
 * Return: If success (1)
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;

	temp = *head;
	if (temp == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		temp = temp->next;
		*head = temp->next;
		free(temp);
	}
	return (1);
}
