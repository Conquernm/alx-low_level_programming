#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 *
 * @head: head of double pointer
 * @n: data added in new the list
 *
 * Return: NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *newnode;
if (head == NULL)
	return (NULL);
newnode = malloc(sizeof(listint_t));
if (newnode == NULL)
	return (NULL);
newnode->n = n;
newnode->next = *head;
*head = newnode;
return (newnode);
}
