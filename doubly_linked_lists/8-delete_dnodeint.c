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

/**
* delete_dnodeint_at_index - deletes the node at index index of the list
* @head: head of the list
* @index: index
* Return: 1 if it succeeded, otherwise -1
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = *head;
	unsigned int i = 0;

	size_t lenght = dlistint_len(*head);

	if (*head == NULL)
		return (-1);

	if (index >= lenght)
		return (-1);

	if (index == 0 && lenght > 0)
	{
		*head = (*head)->next;
		if (lenght != 1)
			(*head)->prev = NULL;
		free(tmp);
		return (1);
	}

	while (i < index)
	{
		tmp = tmp->next;
		i++;
	}

	if (index == lenght - 1)
	{
		tmp->prev->next = NULL;
		free(tmp);
		return (1);
	}
	tmp->prev->next = tmp->next;
	tmp->next->prev = tmp->prev;
	free(tmp);
	return (1);
}
