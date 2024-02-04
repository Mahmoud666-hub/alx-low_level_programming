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
p = &u;
/*u.name = name;*/
p->name = name;
/*strcpy(u.name, name);*/
p->age = age;
/*u.owner = owner;*/
p->owner = owner;
/*strcpy(u.owner, owner);*/
return (p);
}
