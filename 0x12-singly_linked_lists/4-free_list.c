#include"lists.h"
/**
 * free_list - delete list
 * @head: parameter
*/
void free_list(list_t *head)
{
list_t *temp = head;
if (head->next == NULL || !head)
{
free(head);
free(temp);
}
else
while (head != NULL)
{
temp = head->next;
free(head->str);
free(head);
head = temp;
}
}
