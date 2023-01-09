#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order.
 * @array: Is an array of integers.
 * @size: Is the size of the array.
*/

void selection_sort(int *array, size_t size)
{
	size_t len1 = 0, len2 = 0;
	int a = 0, n = 0;

	if (!array)
		return;

	while (len1 < size)
	{
		n = array[len1];
		len2 = len1 + 1;

		while (len2 < size)
		{

			if (array[len2] < n)
			{
				n = array[len2];
				a = len2;
			}
			len2++;
		}

		while (n != array[len1])
		{
			array[a] = array[len1];
			array[len1] = n;
			print_array(array, size);
		}
		len1++;

	}

}
