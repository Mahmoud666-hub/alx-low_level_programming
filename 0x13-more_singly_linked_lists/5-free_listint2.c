#include"lists.h"
/**
 * free_listint2 - free list nodes
 * @head: parameter
*/
void free_listint2(listint_t **head)
{
listint_t *p;
if (*head == NULL)
{
return;
}
if ((*head)->next == NULL)
{
free(*head);
return;
}
p = *head;
while ((*head) != NULL)
{
p = p->next;
free(*head);
(*head) = p;
}
*head = NULL;
}
