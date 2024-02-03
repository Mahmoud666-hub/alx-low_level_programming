#include"lists.h"
/**
 * add_node_end - adding new node
 * @head: parameter
 * @str: parameter
 * Return: struct
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *p = *head;
list_t *w = malloc(sizeof(list_t));
if (!head || !w)
{
free(w);
return (NULL);
}
if (str == NULL)
{
free(w);
return (NULL);
}
else
w->str = strdup(str);
w->len = strlen(str);
w->next = NULL;
if (p)
{
while (p->next)
{
p = p->next;
}
p->next = w;
}
else
*head = w;
return (w);
}
