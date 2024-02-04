#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - create new dog
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 * Return: struct
*/
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *p;

    p = malloc(sizeof(dog_t));

    if (p == NULL)
        return (NULL);

    if (name != NULL)
    {
        p->name = malloc(strlen(name) + 1);
        if (p->name == NULL)
        {
            free(p);
            return (NULL);
        }
        strcpy(p->name, name);
    }
    else
    {
        p->name = NULL;
    }

    p->age = age;

    if (owner != NULL)
    {
        p->owner = malloc(strlen(owner) + 1);
        if (p->owner == NULL)
        {
            free(p->name);
            free(p);
            return (NULL);
        }
        strcpy(p->owner, owner);
    }
    else
    {
        p->owner = NULL;
    }

    return (p);
}
