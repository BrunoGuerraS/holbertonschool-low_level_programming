#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog's data
 * @name: char
 * @age: float
 * @owner: char
 * Description: a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
