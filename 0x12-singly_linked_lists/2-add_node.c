#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node : add a new node at the beginning of list_t
 * @head: head of the list_t
 * @str: given string
 * Return : number of node in list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_element;
	int str_length = 0;

	new_element = malloc(sizeof(list_t));
	if (str == NULL || new_element)
	{
		return (NULL);
	}
	while (str_length != '\0')
	{
		str_length++;
	}
	new_element->str = strdup(str);
	new_element->len = str_length;

	new_element->next = NULL;
	if (*head != NULL)
	{
		new_element->next = *head;
		*head = new_element;
	}
	return (new_element);
}
