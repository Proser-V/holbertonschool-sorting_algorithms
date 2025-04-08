#include "sort.h"

/**
 * insertion_sort_list - Sort the elements of a double linkedlist with
 *                       "insertion sort".
 *
 * Description: Iteratively inserting each element of an unsorted list into
 *              its correct position in a sorted portion of the list.
 *
 * @list: The double linked list to sort.
 *
 * Return: Nothing (void).
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *current, *next, *temp;

	if (*list == NULL || (*list)->next == NULL)
		return;

	current = (*list)->next;

	while (current != NULL)
	{
		next = current->next;
		while (current->prev != NULL && current->n < current->prev->n)
		{
			current->prev->next = current->next;
			if (current->next != NULL)
				current->next->prev = current->prev;

			current->next = current->prev;
			current->prev = current->next->prev;
			current->next->prev = current;
			if (current->prev == NULL)
			*list = current;

			print_list(*list);
		}
			current = next;
	}
}
