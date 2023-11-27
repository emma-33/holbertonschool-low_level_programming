#include "lists.h"

/**
* dlistint_len - returns the number of elements in the list
* @h: pointer to the list
* Return: number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr;
	int count = 0;

	ptr = h;

	while (ptr != NULL)
	{
		if (ptr->n > 0)
		{
			count++;
		}
		ptr = ptr->next;
	}
	return (count);
}
