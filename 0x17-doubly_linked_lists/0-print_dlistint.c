#include "lists.h"
/**
  * print_dlistint - Print all elements of a list
  * @h: Pointer to the first element in a list
  * Return: The number of elements in the list
  */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t elements;

	tmp = h;
	elements = 0;
		while (tmp != NULL)
		{
			printf("%d\n", tmp->n);
			elements++;
			tmp = tmp->next;
		}
	return (elements);
}
