#include "lists.h"

/**
 * list_len - returns the number of elements of a linked list
 * @h: pointer to the list
 * Return: number of elements of the list
 */
size_t list_len(const list_t *h)

{
int count = 0;
current = h;
while (current != NULL)
{
current = current->next;
count++;
}
return (count);

}
