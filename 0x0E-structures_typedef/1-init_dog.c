#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure to represent a dog
 * @name: pointer to the dog's name
 * @age: age of the dog
 * @owner: pointer to the dog's owner's name
 */
struct dog
{
    char *name;
    float age;
    char *owner;
};

typedef struct dog dog_t;

/**
 * init_dog - initializes a dog structure
 * @d: pointer to the dog structure
 * @name: pointer to the dog's name
 * @age: age of the dog
 * @owner: pointer to the dog's owner's name
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

/**
 * print_dog - prints information about a dog
 * @d: pointer to the dog structure
 */
void print_dog(struct dog *d);

/**
 * new_dog - creates and initializes a new dog structure
 * @name: pointer to the dog's name
 * @age: age of the dog
 * @owner: pointer to the dog's owner's name
 * Return: pointer to the newly created dog structure
 */
dog_t *new_dog(char *name, float age, char *owner);

/**
 * free_dog - frees memory allocated for a dog structure
 * @d: pointer to the dog structure to free
 */
void free_dog(dog_t *d);

#endif

