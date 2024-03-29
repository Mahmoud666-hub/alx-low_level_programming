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

p = (*head);
while (p != NULL)
{
p = p->next;
free(*head);
(*head) = p;
}
(*head) = NULL;
}
