#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of a listint_t
 * @head: first node of a list
 * @n: Integer to insert into the new node.
 * Return: Address of the new node
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t *));
	if (head == NULL || new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
