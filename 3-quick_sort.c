#include "sort.h"

/**
 * quick_sort - Sorts an int array with the quick sort algorithm.
 *
 * @array: Array of integers.
 * @size: Size of int array.
 */
void quick_sort(int *array, size_t size)
{
	size_t pivot, l = 0, r = size - 1, count = 0;
	int *narray, temp;

	if (!array || (size < 2 && size > 0))
		return;

	narray = array;

	while (count++ < size)
	{
		pivot = partition(narray, l, r);
		print_array(array, size);

		if (pivot < r)
		temp = array[r];

		array[r] = array[pivot];
		array[pivot] = temp;
		print_array(array, size);

		r = pivot - 1;
	}
}


void sort_array(int *array, size_t left, size_t right)
{
	
}


size_t partition(int *array, size_t left, size_t right)
{
	size_t pivot = right--;
	int temp;

	while (array[left] <= array[pivot])
		left++;

	while (array[right] > array[pivot])
		right--;

	if (left < pivot)
	{
		if (right > left)
		{
			temp = array[right];
			array[right] = array[left];
			array[left] = temp;
			return (left);
		}
	}
}
