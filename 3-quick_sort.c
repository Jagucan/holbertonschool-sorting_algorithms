#include "sort.h"

/**
 * l_part - Implementation of lomuto.
 * @array: array to be sorted
 * @low: the first value on the array
 * @high: the last element on the array
 * @realsize: size of the array
 * Return: value of
*/

int l_part(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = (low - 1); 
	int j = 0;

	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			swap_int(&array[i], &array[j]);
			print_array(array, size);
		}
	}
	swap_int(&array[i + 1], &array[high]);
	print_array(array, size);
	return (i + 1);
}

/**
 *realquickSort -sort array
 *@array: the array to be sorted
 *@low: the first element on the array
 *@high: the last element on the array
 *@size: lenght of the array
 *Return: Nothing
*/

void quicksort(int *array, int low, int high, size_t size)
{
	int aux = 0;
	int now = size;

	if (low < high)
	{
		aux = l_part(array, low, high, now);
		quicksort(array, low, aux - 1, now);
		quicksort(array, aux + 1, high, now);
	}
}

/**
 *quick_sort -sorting an array
 *@array: the array
 *@size: lenght of the array
 *Return: nothing
*/

void quick_sort(int *array, size_t size)
{
	quicksort(array, 0, size - 1, size);
}
