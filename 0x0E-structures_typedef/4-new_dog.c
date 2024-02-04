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
dog_t *p;
char *a = NULL, *b = NULL;
p = malloc(sizeof(dog_t));
if (p == NULL)
{
free(p);
return (NULL);
}
if (!name)
{
p->name = name;
strcpy(a, name);
}
else
free(p->name);
p->age = age;
if (!owner)
{
p->owner = owner;
strcpy(b, owner);
}
else
free(p->owner);

return (p);
}
