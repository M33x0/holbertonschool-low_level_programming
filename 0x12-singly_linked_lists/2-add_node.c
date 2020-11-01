#include "lists.h"
#include <string.h>

/**
* _strlen - get the length of a string
* @str: string
*
* Return: length
*/

int _strlen(const char *s)
{
	int i = 0;
	if (s != NULL)
	{
		while (s[i] != '\0')
		{
			i++;
		}
	}
	return (i);
}

/**
 * add_node : add a new node at the beginning of list_t list
 * @head: pointer to head
 * @str: given string
 *
 * Return : number of node in list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_element;

	new_element = malloc(sizeof(list_t));
	if (new_element == NULL)
	{
		return (NULL);
	}
	new_element->str = strdup(str);
	new_element->len = _strlen(str);
	new_element->next = *head;
	*head = new_element;
	return (new_element);
}
