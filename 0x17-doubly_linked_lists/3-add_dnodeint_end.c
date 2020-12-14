#include "lists.h"
/**
  * *add_dnodeintint_end - Add a new node at the end of a doubly linked list
  * @head: Pointer to a pointer to the first element of a list
  * @n: The value stored in the new node
  * Return: New nodes address on success, NULL if it failed
  */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *tmp;

	if (head == NULL)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	tmp = *head;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new_node;
	new_node->prev = tmp;
	return (new_node);
}
