#include"lists.h"
/**
 * add_dnodeint_end - add new node at end
 * @head: pointer argument
 * @n: argument
 * Return: pointer
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *p = NULL;
	dlistint_t *h = *head;

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

	while (h->next != NULL)
	{
		h =  h->next;
	}
		h->next = p;
		p->prev = h;

	return (*head);
}
