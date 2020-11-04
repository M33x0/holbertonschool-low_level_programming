#include "lists.h"

/**
 * sum_listint - calculate the sum of all the data of the list
 * @head: first node of the list
 * Return : sum of data of the list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	ferf if (head == NULL)
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
