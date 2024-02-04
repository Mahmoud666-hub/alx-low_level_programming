#include"dog.h"
/**
 * new_dog - create new
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 * Return: struct
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *u;
u = malloc(sizeof(dog_t));
if (u == NULL)
{
free(u);
return (NULL);
}
if (name)
{
u->name = malloc(sizeof(strlen(name) + 1));
if (u->name == NULL)
{
free(u->name);
free(u);
return (NULL);
}
strcpy(u->name, name);
}
if (owner)
{
u->owner = malloc(sizeof(strlen(owner) + 1));
if (u->owner == NULL)
{
free(u->owner);
free(u->name);
free(u);
return (NULL);
}
strcpy(u->owner, owner);
}

u->age = age;
return (u);
}
