#include"lists.h"
/**
 * get_dnodeint_at_index - return specific node
 * @head: pointer parameter
 * @index: parameter
 * Return: pointer
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *p = NULL;
	unsigned int m = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (m != index)
	{
		p = head;
		p = p->next;

		if (p == NULL)
		{
			return (NULL);
		}

		m++;
	}

	return (p);
}
