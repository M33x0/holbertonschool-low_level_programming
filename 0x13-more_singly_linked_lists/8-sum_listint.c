#include "lists.h"

/**
 * sum_listint - calculate the sum of all the data of the list
 * @head: first node of the list
 * Return : Integer
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
