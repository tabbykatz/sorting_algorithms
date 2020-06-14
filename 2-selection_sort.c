#include "sort.h"
/**
 * selection_sort - sort array of size with selection sorting
 * @array: int array to sort
 * @size: how big is the array?
 *
 *
 */
void selection_sort(int *array, size_t size)
{
	/* declarations */
	size_t a, b, c;

	/* sort it */
	for (a = 0; a < size - 1; a++)
	{
		c = a;
		for (b = a + 1; b < size; b++)
		{
			if (array[b] < array[c])
				c = b;
		}
		swapper2(array, c, a, size);
	}
}
/**
 * swapper2 - swaps 2 elements of int array with XOR swap
 * @array: the array we are in
 * @a: the first element
 * @b: the second element
 * @size: size of array to pass to print
 */
void swapper2(int *array, int a, int b, size_t size)
{
	if (a == b)
		return;
	array[a] ^= array[b];
	array[b] ^= array[a];
	array[a] ^= array[b];
	print_array((const int *)array, size);
}
