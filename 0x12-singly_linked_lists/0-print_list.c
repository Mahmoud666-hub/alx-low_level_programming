#include"lists.h"
/**
 * print_list - print nodes
 * @h: parameter
 * Return: long
*/
size_t print_list(const list_t *h)
{
const list_t *q = NULL;
size_t c = 0;
q = h;
while (q)
{
printf("[%d] ", (q->str) ? q->len : 0);
printf("%s\n", (q->str) ? q->str : "(nil)");
c++;
q = q->next;
}
return (c);
}
