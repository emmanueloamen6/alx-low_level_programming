#ifndef DOG_H
#define DOG_H
/**
 * struct dog - structure
 * @name: memeber 1
 * @age: member 2
 * @owner: member 3
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - Define a new type
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
