#include "dog.h"
/**
 * init_dog - initiate the struct of dog
 * @d: type struct dog
 * @name: type char *
 * @age: type float
 * @owner: type char *
 * Return: void.
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;

}
