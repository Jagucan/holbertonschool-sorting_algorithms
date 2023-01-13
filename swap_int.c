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
