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
dog_t *p = NULL;
dog_t u;

u.name = name;
p->name = malloc(sizeof(1 + strlen(p->name)));
if (p->name == NULL || name == NULL)
{
free(p->name);
return (NULL);
}
strcpy(u.name, name);
u.age = age;
u.owner = owner;
p->owner = malloc(sizeof(1 + strlen(p->owner)));
if (p->owner == NULL || owner == NULL)
{
free(p->owner);
return (NULL);
}
strcpy(u.owner, owner);

return (p);
}
