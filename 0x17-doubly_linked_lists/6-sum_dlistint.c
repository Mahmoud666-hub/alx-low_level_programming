#include"lists.h"
/**
 * sum_dlistint - return sum of nodes
 * @head: parameter
 * Return: integer
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *h = head;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	while (h != NULL)
	{
		sum += (h->n);
		h = h->next;
	}

	return (sum);
}
