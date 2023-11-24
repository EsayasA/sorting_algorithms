#include "sort.h"
/**
 * integer_swap - this function swaps two parameters
 * @n1:first parameter
 * @n2:second parameter
 */
void integer_swap(int *n1, int *n2)
{
	int tmp;

	tmp = *n1;
	*n1 = *n2;
	*n2 = tmp;
}
/**
 * selection_sort - sorting in ascending order
 * @array:array
 * @size:size
 */
void selection_sort(int *array, size_t size)
{
	int *m;
	size_t a, b;

	if (array == NULL || size < 2)
		return;

	for (a = 0; a < size - 1; a++)
	{
		m = array + a;
		for (b = a + 1; b < size; b++)
			m = (array[b] < *m) ? (array + b) : m;

		if ((array + a) != m)
		{
			integer_swap(array + a, m);
			print_array(array, size);
		}
	}
}
