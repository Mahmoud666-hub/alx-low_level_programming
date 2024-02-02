#include"lists.h"
/**
 * add_node_end - adding new node
 * @head: parameter
 * @str: parameter
 * Return: struct
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *p;
list_t *q = *head;
if (!head || !q)
return (NULL);
p = malloc(sizeof(list_t));
if (p == NULL)
{
free(p);
return (NULL);
}
p->str = strdup(str);
p->len = strlen(str);
p->next = NULL;
while (q->next)
{
q = q->next;
}
q->next = p;
return (p);
}
