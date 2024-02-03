#include"lists.h"
/**
 * free_list - delete list
 * @head: parameter
*/
void free_list(list_t *head)
{
list_t *temp = NULL;
if (!head->next)
{
free(head);
}
temp = head;
if (temp)
{
temp = temp->next;
free(head);
head = temp;
}
}
