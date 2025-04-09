#include "sort.h"

/**
 * quick_sort - Sort the elements of an array with "quick sort".
 *
 * Description: Select a pivot element from the array and partition the other
 *              elements into two sub-arrays according to whether they are less
 *              than or greater than the pivot.
 *
 * @array: The array to sort.
 * @size: The size of the array to sort.
 *
 * Return: Nothing (void).
 */

void quick_sort(int *array, size_t size)
{
	size_t index1, index2, pivot;
	int temp;

	if (array == NULL || size < 2)
		return;

	pivot = size - 1;

	for (index1 = 0; index1 < pivot;)
	{
		for (index2 = index1; index2 < pivot; index2++)
		{
			if (array[index2] <= array[pivot])
			{
				temp = array[index1];
				array[index1] = array[index2];
				array[index2] = temp;
				index1++;
				print_array(array, size);
			}
		}
		temp = array[index1];
		array[index1] = array[pivot];
		array[pivot] = temp;
		index1++;
	}
}
