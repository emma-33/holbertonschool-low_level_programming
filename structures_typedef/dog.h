#ifndef DOG_H
#define DOG_H

/**
 * struct dog - informations for a dog
 * @a: name of the dog
 * @b: age of the dog
 * @c: owner of the dog
 *
 * Description: name of the dog, its age and its owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog;

#endif
