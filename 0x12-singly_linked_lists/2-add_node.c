#include "lists.h"
#include <string.h>

/**
* add_node - function that adds a new node at the beginning of a list_t list.
* @head: pointer of head of list_t.
* @str: string passed.
* Return: number of elements into the node list.
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_element;
	unsigned int length = 0;

	new_element = malloc(sizeof(list_t));
	if (new_element == NULL)
	{
		return (NULL);
	}

	while (str[length] != '\0')
	{
		length++;
	}
	new_element->str = strdup(str);
	new_element->len = length;
	new_element->next = *head;
	*head = new_element;
	return (new_element);
}
