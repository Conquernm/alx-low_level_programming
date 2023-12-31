#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 *
 * @head: head of double pointer
 * @n: int add the list
 * Return: Null if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new;
listint_t *tempo;

if (head == NULL)
	return (NULL);
new = malloc(sizeof(listint_t));
if (new == NULL)
	return (NULL);
new->n = n;
new->next = NULL;
if (*head == NULL)
{
*head = new;
return (new);
}
tempo = *head;
while (tempo->next != NULL)
{
tempo = tempo->next;
}
tempo->next = new;
return (new);
}
