#include "lists.h"

/**
* list_len - returns the number of elements of a linked list
* @h: pointer to the list
* Return: number of elements of the list
*/
size_t list_len(const list_t *h)
{
	const list_t *current;
	int count = 0;

	current = h;

	while (current != NULL)
	{
		if (current->str != NULL || current->len > 0)
		{
			count++;
		}
		current = current->next;
	}
	return (count);
}
