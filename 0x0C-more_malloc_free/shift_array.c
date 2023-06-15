#include "main.h"

/**
 * shift_array_left - Shifts the elements of an array to the left
 * @arr: The array to shift
 * @n: The size of the array
 */
void shift_array_left(char *arr, int n)
{
	int i;

	for (i = n - 1; i > 0; i--)
		arr[i] = arr[i - 1];
}
