#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index of listint_t linked list
 * @head: double pointer
 * @index: index of the node
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *tempo = *head;
listint_t *present = NULL;
unsigned int i = 0;

if (*head == NULL)
return (-1);

if (index == 0)
{
*head = (*head)->next;
free(tempo);
return (1);
}

while (i < index - 1)
{
if (!tempo || !(tempo->next))
return (-1);
tempo = tempo->next;
i++;
}
present = tempo->next;
tempo->next = present->next;
free(present);

return (1);
}
