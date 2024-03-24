#include"lists.h"
/**
 * free_dlistint - free list
 * @head: pointer parameter
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *h = head;


	while (h->next != NULL)
	{
		head = h->next;
		free(h);
		h = head;
	}
	free(head);
	head = NULL;
	h = NULL;
}
