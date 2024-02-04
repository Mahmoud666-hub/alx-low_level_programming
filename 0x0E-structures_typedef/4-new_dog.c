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
dog_t u;
dog_t *p;
char *a, *b;
if (!name)
{
return (NULL);
}
a = malloc(strlen(name) + 1);
strcpy(a, name);
u.name = name;
u.age = age;
if (!owner)
{free(a);
exit(0);
}
b = malloc(strlen(owner) + 1);
strcpy(b, owner);
u.owner = owner;
p = &u;
return (p);
}
