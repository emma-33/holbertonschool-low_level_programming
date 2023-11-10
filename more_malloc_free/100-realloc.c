#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a block of memory using malloc and free
 *
 * @ptr: pointer to the previous memory
 * @old_size: size in bytes of the allocated space for ptr
 * @new_size: new size in bytes of the new memory block
 *
 * Return: pointer to the newly allocated memory or NULL
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *old_ptr = ptr;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < old_size; i++)
	{
		new_ptr[i] = old_ptr[i];
	}
	free(old_ptr);
	return (new_ptr);
}
