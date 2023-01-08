#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers in ascending order.
 * @array: Is an array of integers.
 * @size: Is the size of the array.
*/

void bubble_sort(int *array, size_t size)
{
	size_t a = 0, j = 0;
	int aux;

	if (!array)
		return;

	for (a = 0; a < size; a++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] >= array[j + 1])
			{
				aux = array[j];
				array[j] = array[j + 1];
				array[j + 1] = aux;
				print_array(array, size);

			}

		}

	}

}
