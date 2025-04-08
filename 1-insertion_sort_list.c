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

	if (list == NULL || list->next == NULL)
		return;
	current = *list;

	while (current->next != NULL)
	{
		next = current->next;
		while (next->prev != NULL && next->n < next->prev->n)
		{
			if (next->n > current->n)
			{
				current->next = next->next;
				next->prev = current->prev;
				current->prev = next;
				next->next = current;
				next->next->prev = current;
				temp = next;
				next = current;
				current = temp;
			}
			print_list(*list);
		}
	}
}