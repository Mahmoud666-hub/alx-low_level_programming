#include"lists.h"
/**
 * add_node - adding new node
 * @head: parameter
 * @str: parameter
 * Return: structure
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *p = malloc(sizeof(list_t));
p->str = strdup(str);
p->len = strlen(str);
p->next = NULL;

p->next = *head;
*head = p;
return (*head);
}
