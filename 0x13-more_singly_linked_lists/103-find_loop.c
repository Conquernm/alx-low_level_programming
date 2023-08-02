#include "lists.h"

/**
 * find_listint_loop - find the loop in a linked list
 * @head: pointer to the beginning node of the list
 * Return: address of the node where the loop starts, or NULL if no loop
 *
 */
listint_t *find_listint_loop(listint_t *head)
{

listint_t *snail;
listint_t *rabbit;

snail = rabbit = head;
while (snail && rabbit && rabbit->next)
{
snail = snail->next;
rabbit = rabbit->next->next;
if (snail == rabbit)
{
	snail = head;
	break;
}
}
if (!snail || !rabbit || !rabbit->next)
return (NULL);
while (snail != rabbit)
{
	snail = snail->next;
	rabbit = rabbit->next;
}
return (rabbit);
}
