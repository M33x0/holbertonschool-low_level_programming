#include "lists.h"
/**
  * dlistint_len - Return the number of elements in a list
  * @h: Pointer to the first element of the list
  * Return: The number of elements on success
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t elements = 0;
	const dlistint_t *tmp;

	tmp = h;
	if (tmp == NULL)
	{
		return (0);
	}
	while (tmp != NULL)
	{
		elements++;
		tmp = tmp->next;
	}
	return (elements);
}
