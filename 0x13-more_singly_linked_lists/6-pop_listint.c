#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of  listint_t list
 * @head: doublepointer node
 *
 * Return: 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
listint_t *begin;
int n;

if (head == NULL || *head == NULL)
return (0);

begin = *head;
*head = begin->next;
n = begin->n;
free(begin);
return (n);
}
