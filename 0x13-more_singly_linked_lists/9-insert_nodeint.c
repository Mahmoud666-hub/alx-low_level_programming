#include"lists.h"
/***/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int x = 0;
listint_t *p = *head;
listint_t *u;
if (head == NULL || *head == NULL)
{
return (NULL);
}
u = malloc(sizeof(listint_t));
if (u == NULL)
{
return (NULL);
}
u->n = n;
u->next = NULL;

while (p->next != NULL && x < (idx - 1))
{
p = p->next;
x++;
}
if (x == (idx- 1))
{
u->next = p->next;
p->next = u;
return (u);
}
free(u);
return (NULL);
}