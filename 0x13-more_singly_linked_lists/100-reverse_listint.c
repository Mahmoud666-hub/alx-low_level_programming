#include"lists.h"
/**
 * reverse_listint - reverse list
 * @head: parameter
 * Return: structure
*/
listint_t *reverse_listint(listint_t **head)
{
listint_t *p, *u;
if (*head == NULL || (*head)->next == NULL)
{
return (*head);
}
p = *head;
u = (*head)->next;
p->next = NULL;
while (u)
{
(*head) = u;
if (u->next == NULL)
{
(*head)->next = p;
return (*head);
}
u = u->next;
(*head)->next = p;
p = (*head);
}
return (*head);
}
