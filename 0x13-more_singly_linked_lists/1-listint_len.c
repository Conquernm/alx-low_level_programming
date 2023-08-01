#include "lists.h"

/**
 *listint_len - returns the number of elements in a linked lists
 *
 * @h: the head pointer
 *
 * Return: the nember of elements
 */
size_t listint_len(const listint_t *h)
{
size_t count = 0;

while (h != NULL)
{
h = h->next;
count++;
}
return (count);
}


