#include"dog.h"
/**
 * free_dog - free structure
 * @d: parameter
*/
void free_dog(dog_t *d)
{
if (d)
{
free(d->name);
free(d->owner);
free(d);
}
}
