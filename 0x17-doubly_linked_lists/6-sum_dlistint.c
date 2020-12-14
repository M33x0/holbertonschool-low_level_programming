#include "lists.h"
/**
  * sum_dlistint - Sum up all the values stored in the list
  * @head: Pointer to the start of the list
  * Return: Sum of all values, 0 if list is empty
  */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
