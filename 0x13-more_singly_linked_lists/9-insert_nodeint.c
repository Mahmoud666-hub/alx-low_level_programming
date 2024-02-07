#include"lists.h"
/**
 * insert_nodeint_at_index - insert certain node
 * @head: parameter
 * @idx: parameter
 * @n: parameter
 * Return: structure
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int x = 0;
listint_t *p = *head;
listint_t *u = NULL;
u = malloc(sizeof(listint_t));
if (u == NULL)
return (NULL);

if (*head == NULL)
{
if (idx == 0)
{
u->n = n;
u->next = NULL;
*head = u;
return (*head);
}
else
return (NULL);
}
u->n = n;
u->next = NULL;
if (idx == 0)
{
u->next = p;
(*head) = u;
return (*head);
}
while (p != NULL && x < (idx - 1))
{
p = p->next;
x++;
}
if (p == NULL)
{
free(u);
return (NULL);
}
u->next = p->next;
p->next = u;
return (u);
}
