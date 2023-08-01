#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: double pointer
 * @idx: index of the node
 * @n: new node
 *
 * Return: address of new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
unsigned int i;
listint_t *new, *tempo;

if (head == NULL)
return (NULL);
if (idx != 0)
{
tempo = *head;
for (i = 0; i < idx - 1 && tempo != NULL; i++)
{
	tempo = tempo->next;
}
if (tempo == NULL)
return (NULL);
}
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
if (idx == 0)
{
new->next = *head;
*head = new;
return (new);
}
new->next = tempo->next;
tempo->next = new;
return (new);
}
