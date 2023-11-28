#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog struct
 * @name: doh's name
 * @age: dog's age
 * @owner: ower's name
 *
 * Description: struct dog with the following elements
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
