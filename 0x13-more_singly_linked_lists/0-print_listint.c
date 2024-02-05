#include"lists.h"
/**
 * print_listint - prints nodes
 * @h: parameter
 * Return: size_t count of nodes
*/
size_t print_listint(const listint_t *h)
{const listint_t *b;
size_t x = 0;
if (h == NULL)
{
return (0);
}
b = h;
while (b)
{
printf("%d\n", b->n);
x++;
b = b->next;
}
return (x);
}
