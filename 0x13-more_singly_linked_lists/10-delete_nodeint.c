#include"lists.h"
/**
 * delete_nodeint_at_index - delete certain node
 * @head: parameter
 * @index: parameter
 * Return: integer
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
unsigned int x = 0;
listint_t *p = *head;
listint_t *u = *head;
if ((*head) == NULL || head == NULL)
{return (-1);
}
if (index == 0)
{
(*head) = p->next;
free(p);
return (1);
}

while (p->next != NULL && x < (index - 1))
{
p = p->next;
u = u->next;
x++;
}
if (x == (index - 1))
{
if (u->next == NULL)
{
return (-1);
}
u = u->next;
if (u->next == NULL)
{
free(u);
return (1);
}
u = u->next;
free(p->next);
p->next = u;
return (1);
}
return (-1);
}
