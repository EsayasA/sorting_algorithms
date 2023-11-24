#include "sort.h"
/**
 * swapping - swapping.
 * @n1:first number
 * @n2:second number
 */
void swapping(int *n1, int *n2)
{
	int tmp;

	tmp = *n1;
	*n1 = *n2;
	*n2 = tmp;
}
/**
 * bubble_sort - put in ascending ordr
 * @array:array
 * @size:array size
 * Description: display after swapping
 */
void bubble_sort(int *array, size_t size)
{
	size_t j, len = size;
	bool bub = false;

	if (array == NULL || size < 2)
		return;

	while (bub == false)
	{
		bub = true;
		for (j = 0; j < len - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swapping(array + j, array + j + 1);
				print_array(array, size);
				bub = false;
			}
		}
		len--;
	}
}
