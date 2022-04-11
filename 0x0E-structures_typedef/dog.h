#ifndef DOH_H_
#define DOG_H_

/**
 * struct dogs - a dog struct
 * @name: name of dog
 * @age: age of dogs
 * @owner: owner of dog
 */

struct dog
{
	char *name;
	char *owner;
	float age;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
