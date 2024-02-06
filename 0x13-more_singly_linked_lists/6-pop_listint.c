#include"lists.h"
/**
 * pop_listint - delete head node
 * @head: parameter
 * Return: integer
*/
int pop_listint(listint_t **head)
{
listint_t *p = *head;
int x = 0;
if (!head)
{
return (0);
}
if (p->next)
{
(*head) = p->next;
x = p->n;
free(p);
return (x);
}
else
x = p->n;
free(*head);
return (x);
}
