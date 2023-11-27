#include "lists.h"

/**
* add_node - adds a new node at the beginning of the list
* @head: list
* @str: string to duplicate
* Return: address of the new element or NULL if it fails
*/

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(new_node->str);
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
