#include "sort.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: Is an interger.
 * @b: Is another interger.
*/

void swap_int(int *a, int *b)
{
	int aux = *a;

	*a = *b;
	*b = aux;
}

/**
 * l_part - Implementation of lomuto.
 * @array: Is an array of integers.
 * @size: Is the size of the array.
 * @low: Is the lowest value on the array.
 * @high: Is the higtest value on the array.
 * Return: Return an int.
*/

int l_part(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = (low - 1);
	int j = 0;

	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
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
 * quicksort - Sort an array.
 * @array: Is an array of integers.
 * @size: Is the size of the array.
 * @low: Is the lowest value on the array.
 * @high: Is the higtest value on the array.
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
 * quick_sort - Sorts an array of integers in ascending order.
 * @array: Is an array of integers.
 * @size: Is the size of the array.
*/

void quick_sort(int *array, size_t size)
{
	int aux = size - 1;

	quicksort(array, 0, aux, size);
}
