#include"lists.h"
/**
 * dlistint_len - length of list
 * @h: pointer argument
 * Return: integer
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t m = 0;

	if (h == NULL)
	{
		return (m);
	}

	while (h != NULL)
	{
		/*printf("%d\n", h->n);*/
		m = m + 1;
		h = h->next;
	}

	return (m);
}
