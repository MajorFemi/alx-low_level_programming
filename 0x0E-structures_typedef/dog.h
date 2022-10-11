#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure of a dog
 * @name: string (char)
 * @age: integer
 * @owner: string (char)
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
