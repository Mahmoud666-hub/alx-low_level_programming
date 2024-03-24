#include"lists.h"
/**
 * delete_dnodeint_at_index - delete certain node
 * @head: parameter
 * @index: parameter
 * Return: integer
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int pos = 0;
	dlistint_t *p = *head;

	if (*head == NULL)
	{return (-1);
	}
	while (pos != index)
	{
		if (p->next == NULL)
		{
			if (pos != index)
			{
			return (-1);
			}
			else
			{
				p->prev->next = NULL;
				free(p);
				return (1); }
		}
		p = p->next;
		pos++;

	}
	if (index == 0)
	{
		*head = p->next;
		(*head)->prev = NULL;
		free(p);
		return (1);
	}
	if (pos == index)
	{
	p->prev->next = p->next;
	p->next->prev = p->prev;
	free(p);
	return (1);
	}

	return (-1);
}
