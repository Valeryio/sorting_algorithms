#include "sort.h"

/**
 * print_array - print an array
 *
 * @array: (array data structure)
 * @size: (size_t) the size of the array
 * Description: This function is used to print an
 * array of data.
 * Return: Nothing
 */

void print_array(const int *array, size_t size)
{
	size_t i;

	i = 0;
	while (array && i < size)
	{
		if (i > 0)
			printf(", ");
		printf("%d", array[i]);
		++i;
	}
	printf("\n");
}
