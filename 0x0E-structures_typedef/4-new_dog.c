#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: char string name
 * @age: int age
 * @owner: char string owner
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *f;
	int i, j, k;
	char *m, *e;

	f = malloc(sizeof(struct dog));
	if (f == NULL)
		return (NULL);

	for (i = 0; name[i] != '\0'; i++)
		;
	for (j = 0; owner[j] != '\0'; j++)
		;

	m = malloc(sizeof(char) * i + 1);
	if (m == NULL)
	{
		free(f);
		return (NULL);
	}
	e = malloc(sizeof(char) * j + 1);
	if (e == NULL)
	{
		free(m);
		free(f);
		return (NULL);
	}
	for (k = 0; k <= 1; k++)
		m[k] = name[k];
	for (k = 0; k <= j; k++)
		e[k] = owner[k];

	f->name = m;
	f->age = age;
	f->owner = e;

	return (f);
}
