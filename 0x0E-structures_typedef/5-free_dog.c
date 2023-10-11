#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Frees the memory allocated for a dog structure.
 * @d: Pointer to the dog structure.
 *
 * Description: This function frees the memory allocated for a dog structure, including
 * the memory allocated for the dog's name and owner. It also checks for NULL pointers
 * to avoid errors when freeing memory.
 */
void free_dog(dog_t *d)
{
    if (d)
    {
        if (d->name)
        {
            free(d->name);
        }
        if (d->owner)
        {
            free(d->owner);
        }
        free(d);
    }
}

