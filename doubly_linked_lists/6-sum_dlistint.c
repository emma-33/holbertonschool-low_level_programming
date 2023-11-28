#include "lists.h"

/**
* sum_dlistint - returns the sum of all the data of the list
* @head: head of the list
* Return: sum of all data of the list
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	dlistint_t *ptr;

	ptr = head;

	if (head == NULL)
	return (0);

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
