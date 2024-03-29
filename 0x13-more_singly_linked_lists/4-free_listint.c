#include"lists.h"
/**
 * free_listint - free list of nodes
 * @head: parameter
*/
void free_listint(listint_t *head)
{
listint_t *p;
if (head == NULL)
{
return;
}
if (head->next == NULL)
{
free(head);
return;
}
p = head;
while (p)
{
p = p->next;
free(head);
head = p;
}
}
