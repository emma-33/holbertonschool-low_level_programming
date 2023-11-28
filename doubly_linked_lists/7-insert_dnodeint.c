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
* insert_dnodeint_at_index - inserts a new node at a given position
* @h: head of the list
* @idx: index of the list where the node should be added
* @n: data
* Return: address of the new node or NULL if it fails
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp;
	dlistint_t *new_node;
	unsigned int i = 0;

	size_t lenght = dlistint_len(*h);

	tmp = *h;

	if (idx > lenght)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (lenght == idx)
		return (add_dnodeint_end(h, n));

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

while (i < idx - 1)
{
	tmp = tmp->next;
	i++;
}

	new_node->n = n;
	new_node->prev = tmp;
	new_node->next = tmp->next;
	tmp->next->prev = new_node;
	tmp->next = new_node;

	return (new_node);
}
