#include "lists.h"

/**
* print_list - prints all the elements of list_t list
* @h: pointer to a list
* Return: the number of nodes
*/
size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *current;

	current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", current->len, current->str);
		}
		current = current->next;
		count++;
	}
		return (count);
}
