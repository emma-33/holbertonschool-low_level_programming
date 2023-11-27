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
	if (ptr == NULL)
	{
		return (0);
	}
	while (ptr != NULL)
	{
		ptr = ptr->next;
		count++;
	}
	return (count);
}
