#include "sort.h"

/**
 * swap_nodes - swaps two integer values
 *
 * @array: array of ints to sort
 * @size: size of the array
 * @m: address for the first value
 * @n:address for the second value
 * Return: void
*/

void swap_nodes(int *array, size_t size, int *m, int *n)
{

	if (*m != *n)
	{
		/*doing arithmetic based operation */
		*m = *m + *n;
		*n = *m - *n;
		*m = *m - *n;
		print_array((const int *)array, size);
	}
}

/**
 * lomuto_partition - partitions the array
 *
 * @array: array of ints to sort
 * @size: size of the array
 * @down: the lowest index of the sort range
 * @top: the highest index of the sort range
 *
 * Return: size_t
*/

size_t lomuto_partition(int *array, size_t size, ssize_t down, ssize_t top)
{
	int x, y, pivot = array[top];

	for (x = y = down; y < top; y++)
	{
		if (array[y] < pivot)
		{
			swap_nodes(array, size, &array[y], &array[x++]);
		}
	}
	swap_nodes(array, size, &array[x], &array[top]);

	return (x);
}

/**
 * quicksort - quicksorts via lomuto paritioning scheme
 *
 * @array: array of ints to sort
 * @size: the size of the array
 * @down: the lowest index of the sort range
 * @top: the highest index of the sort range
 *
 * Return: void
*/

void quicksort(int *array, size_t size, ssize_t down, ssize_t top)
{
	if (down < high)
	{
		size_t lp = lomuto_partition(array, size, low, top);

		quicksort(array, size, down, lp - 1);
		quicksort(array, size, lp + 1, top);
	}
}

/**
 * quick_sort -  function that sorts an array of integers in
 *ascending order using the Quick sort algorithm
 *
 * @array: array to sort
 * @size: size of the array
*/

void quick_sort(int *array, size_t size)
{
	if (!array || !size)
	{
		return;
	}
	quicksort(array, size, 0, size - 1);
}
