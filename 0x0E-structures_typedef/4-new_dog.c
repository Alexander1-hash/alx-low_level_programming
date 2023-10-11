#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - Creates and initializes a new dog structure.
 * @name: Name of the dog.
 * @age: Age of the dog.
 * @owner: Owner of the dog.
 *
 * Return: A pointer to the newly created dog structure.
 *
 * Description: This function creates a new dog structure dynamically and initializes it
 * with the provided name, age, and owner. Memory allocation is handled and checked for errors.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    int i = 0, j = 0, k;
    dog_t *d;

    while (name[i] != '\0')
        i++;
    while (owner[j] != '\0')
        j++;

    d = malloc(sizeof(dog_t));
    if (d == NULL)
    {
        return (NULL);
    }

    d->name = malloc((i + 1) * sizeof(char));
    if (d->name == NULL)
    {
        free(d);
        return (NULL);
    }

    for (k = 0; k <= i; k++)
    {
        d->name[k] = name[k];
    }

    d->age = age;

    d->owner = malloc((j + 1) * sizeof(char));
    if (d->owner == NULL)
    {
        free(d->name);
        free(d);
        return (NULL);
    }

    for (k = 0; k <= j; k++)
    {
        d->owner[k] = owner[k];
    }

    return (d);
}

