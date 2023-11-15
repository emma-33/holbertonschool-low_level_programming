#include <stdlib.h>
#include "dog.h"

/**
* _strdup - returns a pointer to a new string which is
* a duplicate of the string str
*
* @str: string to duplicate
*
* Return: pointer to duplicate string or null if
* insufficient memory was available
*/

char *_strdup(char *str)
{
	unsigned int i = 0;
	unsigned int j = 0;

	char *str2;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		i++;
	}
	str2 = malloc(sizeof(char) * (i + 1));

	if (str2 == NULL)
	{
		return (NULL);
	}

	while (str[j] != '\0')
	{
		str2[j] = str[j];
		j++;
	}
	str2[j] = 0;
	return (str2);
}

/**
* new_dog - creates a new dog
*
* @name: pointer to the name of the dog
* @age: age of the dog
* @owner: pointer to the owner of the dog
*
* Return: pointer to new string or NULL if it fails
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *new_name;
	char *new_owner;

	new = malloc(sizeof(dog_t));
	if (new == NULL)
		return (NULL);

	new_name = _strdup(name);
	if (new_name == NULL)
	{
		free(new);
		return (NULL);
	}
	new_owner = _strdup(owner);
	if (new_owner == NULL)
	{
		free(new_name);
		free(new);
		return (NULL);
	}

	new->name = new_name;
	new->age = age;
	new->owner = new_owner;

	return (new);
}
