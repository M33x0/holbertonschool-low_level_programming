#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Struct of a dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

/*1-init_dog.c*/
void init_dog(struct dog *d, char *name, float age, char *owner);
/*2-print_dog*/
void print_dog(struct dog *d);
/**/
void free_dog(dog_t *d);
#endif
