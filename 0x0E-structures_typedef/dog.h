#ifndef DOG_H
#define DOG_H
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct dog dog_t;
/**
 * struct dog - structure
 * @name: parameter
 * @age: parameter
 * @owner: parameter
*/
struct dog
{
char *name;
float age;
char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
