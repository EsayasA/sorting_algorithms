#include "sort.h"
void to_swap(int *n1, int *n2);
int lomuto_partition(int *array, size_t size, int left, int right);
void lomuto_sort(int *array, size_t size, int left, int right);
void quick_sort(int *array, size_t size);
/**
 * to_swap - to swap two elements
 * @n1:first parameter
 * @n2:second parameter
 */
void to_swap(int *n1, int *n2)
{
	int tmp;

	tmp = *n1;
	*n1 = *n2;
	*n2 = tmp;
}
/**
 * sub_set - subset function
 * @arr:array
 * @size:size
 * @start:first index
 * @end:last index
 * Return:indexx
 */
int sub_set(int *arr, size_t size, int start, int end)
{
	int *pv, ab, be;

	pv = arr + end;
	for (ab = be = start; be < end; be++)
	{
		if (array[be] < *pv)
		{
			if (ab < be)
			{
				to_swap(arr + be, arr + ab);
				print_array(arr, size);
			}
			ab++;
		}
	}

	if (array[ab] > *pv)
	{
		to_swap(arr + ab, pv);
		print_array(arr, size);
	}

	return (ab);
}
/**
 * recurse_sort - quickest algorithm
 * @arr:array
 * @size:size
 * @start:start index
 * @end:last index
 */
void recurse_sort(int *arr, size_t size, int start, int end)
{
	int pr;

	if (end - start > 0)
	{
		pr = sub_set(arr, size, start, end);
		recurse_sort(arr, size, start, pr - 1);
		recurse_sort(arr, size, pr + 1, end);
	}
}
/**
 * quick_sort - quick lgorithm
 * @array:array
 * @size:size
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	recurse_sort(array, size, 0, size - 1);
}
