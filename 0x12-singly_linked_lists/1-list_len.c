#include"lists.h"
/**
 * list_len - count length
 * @h: parameter
 * Return: integer
*/
size_t list_len(const list_t *h)
{
const list_t *p = NULL;
size_t c = 0;
if (h == NULL)
{
return (0);
}
p = h;
while (p)
{
c++;
p = p->next;
}
return (c);
}
