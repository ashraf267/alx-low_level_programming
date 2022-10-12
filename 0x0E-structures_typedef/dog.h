#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog's blueprint
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif /* DOG_H */
