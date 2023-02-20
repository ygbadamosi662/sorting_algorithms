#include "sort.h"

/**
 * insertion_sort_list - this sorts a double linked list using
 * insertion method.
 * @list: pointer pointing the address of a point of listint_t list.
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *tmp, *head;

	if (!list)
		return;
	head = *list;
	curr = head;
	while (head)
	{
		if (curr->prev && curr->n < curr->prev->n)
		{
			tmp = curr->prev;
			tmp->next = curr->next;
			curr->prev = tmp->prev;
			if (tmp->prev)
				tmp->prev->next = curr;
			else
				*list = curr;
			if (curr->next)
				curr->next->prev = tmp;
			tmp->prev = curr;
			curr->next = tmp;
			print_list(*list);
		}
		else
		{
			if (head->next)
			{
				head = head->next;
				curr = head;
			}
			else
				return;
		}
	}
}
