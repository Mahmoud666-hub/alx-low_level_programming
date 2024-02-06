#include"lists.h"
/**
 * sum_listint - give sum of data
 * @head: parameter
 * Return: integer
*/
int sum_listint(listint_t *head)
{
int sum = 0;
listint_t *p = head;
if (head == NULL)
{
return (0);
}
while (p->next)
{
sum += p->n;
p = p->next;
}
return (sum);
}
