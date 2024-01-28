#include"dog.h"
/**
 * init_dog - initialize structure
 * @d: parameter
 * @name:parameter
 * @age: parameter
 * @owner: parameter
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != 0)
{
d->name = name;
(*d).age = age;
(*d).owner = owner;
}
}
