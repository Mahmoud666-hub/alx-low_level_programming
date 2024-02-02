#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * struct list_t - singly linked list
 * @str: string
 * @len: length
 * @next: pointer
 * Description: singly linked list node
*/
typedef struct list_t
{
char *str;
int len;
struct list_t *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
#endif
