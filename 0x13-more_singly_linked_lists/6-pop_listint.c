#include "lists.h"

/**
 * pop_listint - deletes head node and returns the head integer.
 * @head: pointer to pointer to the actual position of the linked listint_t
 * Return: head's node data (n).
 */
int pop_listint(listint_t **head)
{
	int val;
	listint_t *temp;

	if (*head == NULL)
	{
		return (0);
	}
	temp = *head;
	val = temp->n;
	temp = temp->next;
	free(*head);
	*head = temp;

	return (val);
}
