#include"lists.h"
/**
 * print_dlistint - print nodes
 * @h: pointer argument
 * Return: integer
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t x = 0, m = 0;

	if (h == NULL)
	{
		return (x);
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		m = m + 1;
		h = h->next;
	}

	return (m);
}
