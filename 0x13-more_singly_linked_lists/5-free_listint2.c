#include"lists.h"
/**
 * free_listint2 - free list nodes
 * @head: parameter
*/
void free_listint2(listint_t **head)
{
listint_t *p;
if (!head || !*head)
{
return;
}
if ((*head)->next == NULL)
{
free(*head);
(*head) = NULL;
return;
}
p = (*head);
while (p != NULL)
{
p = p->next;
free(*head);
(*head) = p;
}
(*head) = NULL;
head = NULL;
return;
}
