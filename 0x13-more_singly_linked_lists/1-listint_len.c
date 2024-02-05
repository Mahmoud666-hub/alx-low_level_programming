#include"lists.h"
/**
 * listint_len - numbering nodes
 * @h: parameter
 * Return: size_t count of nodes
*/
size_t listint_len(const listint_t *h)
{
size_t x = 0;
const listint_t *c;
if (h == NULL)
{
return (0);
}
c = h;
while (c)
{
x++;
c = c->next;
}
return (x);
}
