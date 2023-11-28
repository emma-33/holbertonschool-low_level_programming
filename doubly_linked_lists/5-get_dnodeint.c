#include "lists.h"

/**
* get_dnodeint_at_index - returns the nth node of the list
* @head: head of the list
* @index: index of the node
* Return: the nth node of the list
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int num = 0;

	ptr = head;

	if (head == NULL)
	return (NULL);

	while (ptr != NULL)
	{
		if (num == index)
		{
			return (ptr);
		}
		num++;
		ptr = ptr->next;
	}
	return (NULL);
}
