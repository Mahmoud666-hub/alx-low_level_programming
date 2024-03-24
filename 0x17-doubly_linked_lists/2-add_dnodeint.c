#include"lists.h"
/**
 * add_dnodeint - add new node at the begining
 * @head: pointer
 * @n: integer
 * Return: pointer
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *p = NULL;

	p = malloc(sizeof(dlistint_t));
	if (p == NULL)
	return (NULL);

	p->n = n;
	p->next = NULL;
	p->prev = NULL;
	if (*head == NULL)
	{
		*head = p;
		return (*head);
	}
	else
	p->next = *head;
	*head = p;
	return (*head);
}
