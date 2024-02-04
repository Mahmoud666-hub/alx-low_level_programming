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
dog_t *p = malloc(sizeof(dog_t));
if (p == NULL)
{
free(p->name);
free(p->owner);
free(p);
return (NULL);
}
if (p->name && name)
{
strcpy(p->name, name);
}
else
free(p->name);
p->age = age;
if (p->owner && owner)
{
strcpy(p->owner, owner);
}
else
free(p->owner);

return (p);
}
