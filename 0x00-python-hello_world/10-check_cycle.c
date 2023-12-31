#include "lists.h"

/**
 * check_cycle - function that checks if a linked list contains a cycle
 * @list: linked list to check
 *
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */
int check_cycle(listint_t *list)
{
	listint_t *fast;

	fast = list;

	if (list == NULL)
	{
		return (0);
	}

	while (list && fast && fast->next)
	{
		list = list->next;
		fast = fast->next->next;

		if (list == fast)
		{
			return (1);
		}
	}

	return (0);
}

