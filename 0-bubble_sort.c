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
 * sorting - put in ascending ordr
 * @arr:array
 * @size:array size
 * Description: display after swapping
 */
void sorting(int *arr, size_t size)
{
	size_t j, len = size;
	bool bub = false;

	if (arr == NULL || size < 2)
		return;

	while (bub == false)
	{
		bub = true;
		for (j = 0; j < len - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swapping(arr + j, arr + j + 1);
				print_array(arr, size);
				bub = false;
			}
		}
		len--;
	}
}
