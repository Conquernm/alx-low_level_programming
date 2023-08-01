#include "lists.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * _r -reallocates memory for an array to the nodesin limked list
 * @list: old list
 * @size: size of new list
 * @new: size if the fresh list
 * Return: pointer to new list
 */
const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **freshlist;
	size_t v;

	freshlist = malloc(size * sizeof(listint_t *));
	if (freshlist == NULL)
	{
		free(list);
		exit(98);
	}
	for (v = 0; v < size - 1; v++)
		freshlist[v] = list[v];
	freshlist[v] = new;
	free(list);
	return (freshlist);
}

/**
 * print_listint_safe - prints a linked list
 * @head: pointer to the start of the list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t v, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (v = 0; v < num; v++)
		{
			if (head == list[v])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}
		}
		num++;
		list = _r(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (num);
}
