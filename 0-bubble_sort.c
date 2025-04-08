#include "sort.h"

/**
 * bubble_sort - Sort the elements of an array with "bubble sort".
 *
 * Description: Repeatedly swapping the adjacent elements if they are in the
 *              wrong order.
 *
 * @array: The array to sort.
 * @size: The size of the array to sort.
 *
 * Return: Nothing (void).
 */

void bubble_sort(int *array, size_t size)
{
	size_t index1, index2, temp;
	int swapped;

	if (array == NULL || size == 0)
		return;

	for (index1 = 0; index1 < size - 1; index1++)
	{
		swapped = 0;

		for (index2 = 0; index2 < (size - index1 - 1); index2++)
		{
			if (array[index2] > array[index2 + 1])
			{
				temp = array[index2];
				array[index2] = array[index2 + 1];
				array[index2 + 1] = temp;
				swapped = 1;
				print_array(array, size);
			}
		}
		if (swapped == 0)
			break;
	}
}
