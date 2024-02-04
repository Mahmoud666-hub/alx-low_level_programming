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
dog_t u;
p = malloc(sizeof(dog_t));
if (p == NULL)
{
free(p);
return (NULL);
}

u.name = name;
p->name = name;
/*strcpy(u.name, name);*/
u.age = age;
u.owner = owner;
p->owner = owner;
/*strcpy(u.owner, owner);*/
free(p);
p = &u;
return (p);
}
