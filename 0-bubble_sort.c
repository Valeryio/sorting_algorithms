#include "sort.h"

/**
 * bubble_sort - make a bubble sort
 *
 * @array: the array to sort
 * @size: the size of the array
 * Description: This function sorts an array
 * with the bubble algorithm method.
 * Return: Nothing
 */

void bubble_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, tmp = 0, swap = 0;

	if (!array)
		return;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < (size - i) - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				tmp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = tmp;
				print_array(array, size);
				swap = 1;
			}
		}
		if (swap == 0)
			return;
	}
}
