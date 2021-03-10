#include "dog.h"
#include <stdlib.h>
char *_strdup(char *str);
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
	p->name = _strdup(name);
	if (p->name == NULL)
	{
		free(p);
		return (NULL);
	}
	p->age = age;
	p->owner = _strdup(owner);
	if (p->owner == NULL)
	{
		free(p);
		return (NULL);
	}
	return (p);
}

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: tyoe char *
 * Return: pointer p, otherwith NULL.
 */
char *_strdup(char *str)
{
	int i;
	char *p, *s;
	int len;

	if (str == NULL)
		return (NULL);

	s = str;
	for (len = 0; *s != '\0'; len++)
		s++;

	p = malloc((len + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i <= len; i++)
		p[i] = str[i];
	return (p);
}
