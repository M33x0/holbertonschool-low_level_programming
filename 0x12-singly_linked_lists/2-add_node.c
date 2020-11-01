#include "lists.h"
#include <stdlib.h>
/**
 * _strlen - returns the length of a given string
 *
 * @s: string to check the length of
 * Return: returns the length of the string
 */

int _strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/**
 * add_node - adds a node to the start of a list_t list
 *
 * @head: pointer to head of list
 * @str: string to add to node
 * Return: address of new element, or NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_elements;

	new_elements = malloc(sizeof(list_t));
	if (new_elements == NULL)
		return (NULL);
	new_elements->str = strdup(str);
	new_elements->len = _strlen(str);
	new_elements->next = *head;
	*head = new_elements;

	return (new_elements);
}
