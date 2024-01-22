#include "sort.h"

/**
 * shell_sort - sorts an array
 * @array: array to be sorted
 * @size: size of array
 *
 * Return: Nothing
 */

void shell_sort(int *array, size_t size)
{
	size_t i, j, gap;
	int temp;

	if (size < 2)
	{
		return;
	}

	/* Generate the Knuth sequence */
	gap = 1;
	while (gap <= size / 3)
	{
		gap = gap * 3 + 1;
	}

	/* Start sorting with the Knuth sequence */
	while (gap > 0)
	{
		for (i = gap; i < size; ++i)
		{
			temp = array[i];
			j = i;

			while (j >= gap && array[j - gap] > temp)
			{
				array[j] = array[j - gap];
				j -= gap;
			}

			array[j] = temp;
		}
		print_array(array, size);

		/* Update the interval using Knuth sequence */
		gap = (gap - 1) / 3;
	}
}
