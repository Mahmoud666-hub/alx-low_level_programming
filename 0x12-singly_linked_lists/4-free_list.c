#include"lists.h"
/**
 * free_list - delete list
 * @head: parameter
*/
void free_list(list_t *head)
{
list_t *temp = NULL;
if (!head)
return;
if (head->next == NULL)
{
free(head->str);
free(head);
free(temp);
}
temp = head;
while (head != NULL)
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}
}
