#include "lists.h"

/**
 * free_list - release memory allocation of list
 * @head: a pointer to the first node of the list to free
 */
void free_list(list_t *head)
{
if (head)
{
free_list(head->next);
if (head->str)
free(head->str);
free(head);
}
}
