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
dog_t * p;
dog_t u;
u.name = name;
u.age = age;
u.owner = owner;
p = &u;
return (p);
}
