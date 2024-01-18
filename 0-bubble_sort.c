#include "sort.h"

/**
 * bubble_sort - sorts an array of integers
 * @array: array to be sorted
 * @size: size of the array
 *
 * Return: Nothing!
 *
 */
void bubble_sort(int *array, size_t size)
{
	int i, j, temp, flag;

	print_array(array, size);
	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
				flag = 1;
			}
		}
		if (flag == 0)
		{
			break;
		}
	}
}
