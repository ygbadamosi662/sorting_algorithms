#include "sort.h"

/**
 * selection_sort - sorts a array of integers using
 * selection method.
 * @array: pointer to the array of integers.
 * @size: size of the array.
*/

void selection_sort(int *array, size_t size)
{
	size_t i, j, k;
	int tmp;

	for (i = 0; i < size; i++)
	{
		tmp = array[i];
		for (j = i + 1; j < size; j++)
		{
			if (tmp > array[j])
			{
				tmp = array[j];
				k = j;
			}
		}
		if (tmp != array[i])
		{
			array[k] = array[i];
			array[i] = tmp;
			print_array(array, size);
		}
	}
}
