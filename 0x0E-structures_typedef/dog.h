#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Struct of a dog
 * @name: char *
 * @age: integer
 * @owner: char *
 */

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

struct dog
{
	char *name;
	float age;
	char *owner;
};

/*1-init_dog.c*/
void init_dog(struct dog *d, char *name, float age, char *owner);
/*2-print_dog*/
void print_dog(struct dog *d);

#endif
