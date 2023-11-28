#include "lists.h"

/**
* add_dnodeint_end - adds a new node at the end of the list
* @head: head of the list
* @n: data
* Return: the address of the new element or NULL if it fails
*/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *ptr;

	new_node = malloc(sizeof(dlistint_t));
	ptr = *head;

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (*head);
	}
	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	new_node->prev = ptr;
	ptr->next = new_node;
	return (new_node);
}
