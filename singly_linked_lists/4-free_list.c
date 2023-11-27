#include "lists.h"

/**
* free_list - frees the list
* @head: head of the list
*/
void free_list(list_t *head)
{
	list_t *ptr;

	ptr = head;

	while (ptr != NULL)
	{
		free(ptr->str);
		free(ptr);
		ptr = ptr->next;
	}
}
