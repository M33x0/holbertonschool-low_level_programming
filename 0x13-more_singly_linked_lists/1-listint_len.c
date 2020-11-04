#include "lists.h"

/**
 *size_t listint_le - Return  all the elements in the list
 *@h:head pointer
 *Return: number of node
 */
size_t listint_len(const listint_t *h)
{
	unsigned int number_of_elements = 0;

	while (h != NULL)
	{
		number_of_elements++;
		h = h->next;
	}
	return (number_of_elements);
}
