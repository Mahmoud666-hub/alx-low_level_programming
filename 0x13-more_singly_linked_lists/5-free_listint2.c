#include"lists.h"
/**
 * free_listint2 - free list nodes
 * @head: parameter
*/
void free_listint2(listint_t **head)
{
listint_t *p;
if (*head == NULL || head == NULL)
{
(*head) = NULL;
p = NULL;
return;
}

if ((*head)->next == NULL)
{
free(*head);
(*head) = NULL;
p = NULL;
return;
}
p = *head;
while (p != NULL)
{
p = p->next;
free(*head);
(*head) = p;
}
(*head) = NULL;
head = NULL;
}
