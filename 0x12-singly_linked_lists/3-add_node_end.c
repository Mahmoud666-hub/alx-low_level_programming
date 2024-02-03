#include"lists.h"
/**
 * add_node_end - adding new node
 * @head: parameter
 * @str: parameter
 * Return: struct
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *p, *w = NULL;
p = malloc(sizeof(list_t));
if (p == NULL || *head == NULL)
{
free(p);
return (NULL);
}
w = *head;
p->str = strdup(str);
p->len = strlen(str);
p->next = NULL;
while (w->next)
{
w = w->next;
}
w->next = p;
return (p);
}
