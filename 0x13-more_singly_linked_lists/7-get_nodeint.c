#include"lists.h"
/**
 * get_nodeint_at_index - git certain node
 * @head: parameter
 * @index: parameter
 * Return: structure
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int x = 0;
listint_t *p = head;
if (head == NULL || index == 0)
{
return (NULL);
}

while (p->next != NULL && x <= index)
{
if (x == index)
{
return (p);
}
p = p->next;
x++;
}
return (NULL);
}
