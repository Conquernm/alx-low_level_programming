#include "lists.h"

/**
 * reverse_listint - reverses a listint_t list
 * @head: double pointer
 *
 * Return: pointer to the first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *before = NULL;
listint_t *next = NULL;

while (*head)
{
next = (*head)->next;
(*head)->next = before;
before = *head;
*head = next;
}
*head = before;
return (*head);
}
