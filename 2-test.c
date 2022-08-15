#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int array[] = {11, 28, 6, 42, 29, 21, 37, 9, 10, 25, 45, 7, 46, 32, 26, 12, 30, 22, 40, 47, 41, 3, 50, 33, 39, 20, 16, 24, 27, 34, 18, 43, 48, 49, 38, 13, 31, 8, 44, 2, 35, 15, 1, 19, 5, 14, 4, 23, 17, 36};
	size_t n = sizeof(array) / sizeof(array[0]);

	print_array(array, n);
	printf("\n");
	selection_sort(array, n);
	printf("\n");
	print_array(array, n);
	return (0);
}
