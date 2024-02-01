#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * struct list_m - singly linked list
 * @str: string
 * @len: length
 * @next: pointer
 * Description: singly linked list node
*/

typedef struct list_m
{
char *str;
int len;
struct list_t *next;
} list_t;

size_t print_list(const list_t *h);

#endif