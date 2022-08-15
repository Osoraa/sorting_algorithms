#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order in place.
 *
 * @array: Array of integers.
 * @size: Size of array.
 */
void selection_sort(int *array, size_t size)
{
	int least, index, temp, *current = array;
	size_t i, count = 0, _size = size;

	if (!array)
		return;

	while (count++ < size)
	{
		least = current[0];

		for (i = 1; i < _size; i++)
		{
			if (least > current[i])
			{
				least = current[i];
				index = i;
			}
		}

		if (least != current[0])
		{
			temp = current[0];
			current[0] = least;
			current[index] = temp;

			print_array(array, size);
		}
		
		current++;
		_size--;
	}
}
