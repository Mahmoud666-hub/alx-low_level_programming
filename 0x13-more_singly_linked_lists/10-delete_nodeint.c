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
listint_t *p = NULL;
listint_t *u = *head;
if ((*head) == NULL || head == NULL)
{return (-1);
}
if (index == 0)
{
(*head) = u->next;
free(u);
return (1);
}

while (u != NULL && x < index)
{
p = u;
u = u->next; /*at end u at index*/
x++;
}
if (u == NULL)
{
return (-1);
}
p->next = u->next;
free(u);
return (1);
}
