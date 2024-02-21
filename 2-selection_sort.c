#include "sort.h"

/**
 * selection_sort - Function that sortrs an array of integers in asceding order
 * using the selection sort algorithms.
 * @array: Array to sort.
 * @size: Size of the array.
 */

void selection_sort(int *array, size_t size)
{
	size_t k, l, m;
	int temp;


	if (!array || !size)
	{
		return;
	}
	for (k = 0; k < size - 1; k++)
	{
		for (l = size - 1, m = k + 1; l > k; l--)
		{
			if (array[l] < array[m])
			{
				m = l;
			}
		}
		if (array[k] > array[m])
		{
			temp = array[k];
			array[k] = array[m];
			array[m] = temp;
			print_array(array, size);
		}
	}
}
