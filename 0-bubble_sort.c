#include "sort.h"
/**
 * swap_ints - Swap two integers in an array.
 * @x: The first integer to swap.
 * @y: The second integer to swap.
 */

void swap_ints(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}
/**
 * bubble_sorting - sort an array of integers in ascending order.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 *
 * Description: Prints the array after each swap.
 */
void bubble_sorting(int *array, size_t size)
{
	size_t i, len = size;

	boolean_n bubbly = false;
	
	if (array == NULL || size < 2)
		return;
	while (bubbly == false)
	{
		bubbly = true;
		for (i = 0; i  < len - 1; i++)
		{
			if (array[i] > array [i + 1])
			{
				swap_ints(array + i, array + i +1);
				print_array(array, size);
				bubbly = false;
			}
		}
		;
	}
}
