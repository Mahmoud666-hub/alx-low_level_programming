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
if (!name || age < 0 || !owner)
{
return (NULL);
}
u = malloc(sizeof(dog_t));
if (u == NULL)
{
free(u);
return (NULL);
}

u->name = malloc(sizeof(strlen(name) + 1));
if (u->name == NULL)
{
free(u->name);
free(u);
return (NULL);
}
u->name = strcpy(u->name, name);

u->owner = malloc(sizeof(strlen(owner) + 1));
if (u->owner == NULL)
{
free(u->owner);
free(u->name);
free(u);
return (NULL);
}
u->owner = strcpy(u->owner, owner);


u->age = age;
return (u);
}
