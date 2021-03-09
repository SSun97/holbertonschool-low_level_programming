#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - check the code for Holberton School students.
 * @name: type char *
 * @age: type float
 * @owner: type char *
 * Return: dog_t *.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	p->name = name;
	p->age = age;
	p->owner = owner;

	return (p);
}
