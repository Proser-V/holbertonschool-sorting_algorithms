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
	size_t index1, index2, pvt;
	int temp, p_swap;

	if (array == NULL || size < 2)
		return;

	pvt = size - 1;
	while (pvt != 0)
	{
		for (index1 = 0, index2 = 0; index1 <= pvt; index2++, index1++)
		{
			index2 = index1;
			p_swap = 0;
			if (array[index1] >= array[pvt])
			{
				while (array[index2] > array[pvt] && index2 < pvt)
					index2++;

				temp = array[index1];
				if (temp == array[pvt])
					p_swap = 1;
				array[index1] = array[index2];
				array[index2] = temp;
				if (p_swap == 0)
					print_array(array, size);
			}
		}
		if (p_swap == 1)
			pvt--;
	}
}
