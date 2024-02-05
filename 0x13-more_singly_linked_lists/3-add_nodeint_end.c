#include"lists.h"
/**
 * add_nodeint_end - add node at end
 * @head: parameter
 * @n:bparameter
 * Return: strucure
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *e;
listint_t *p;
p = malloc(sizeof(listint_t));
if (p == NULL)
{
return (NULL);
}
p->n = n;
p->next = NULL;
if ((*head) == NULL)
{
(*head) = p;
return (*head);
}
e = (*head);
while (e->next != NULL)
{
e = e->next;
}
e->next = p;
return (p);
}
