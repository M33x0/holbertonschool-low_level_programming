#include "lists.h"

/**
 * listint_len - calculate the number of elements in listint_t
 * @h: pointer to a list
 * Return: number of elements
 **/
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
