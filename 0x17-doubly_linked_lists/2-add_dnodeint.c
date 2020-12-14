#include "lists.h"
/**
  * *add_dnodeint - Add a new node to a doubly linked list
  * @head: Pointer to a pointer to the first element of a list
  * @n: The value stored in the new node
  * Return: New nodes address on success, NULL if it failed
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *begin;

	begin = *head;
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (begin != NULL)
	{
		while (begin->prev != NULL)
		{
			begin = begin->prev;
			begin->prev = new_node;
		}
	}
	new_node->next = begin;
	new_node->n = n;
	new_node->prev = NULL;
	begin = new_node;
	return (new_node);
}
