#include"lists.h"
/**
 * insert_dnodeint_at_index - insert new node
 * @h: parameter
 * @idx: parameter
 * @n: parameter
 * Return: pointer
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *p = *h;
	dlistint_t *new = NULL;
	unsigned int pos = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	if (idx == 0)
	{
		new->next = p;
		*h = new;
		return (*h);
	}
	while (pos != idx)
	{
		if (p->next == NULL)
		{
			break;
		}
		p = p->next;
		pos++;
	}
	if (pos != idx)
	{
		free(new);
		return (NULL);
	}
	p->prev->next = new;
	new->prev = p->prev;
	p->prev = new;
	new->next = p;
	return (new);
}
