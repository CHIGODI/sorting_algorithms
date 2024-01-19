#include "sort.h"
/**
 * selection_sort -  sorts an array of integers in ascending
 *                  order using the Selection sort algorithm
 * @array: array to be sorted
 * @size: size of the array
 *
 * Return: Nothing!
 *
 */
void selection_sort(int *array, size_t size)
{
        size_t min_idx, temp, i, j;

	if (size < 2 || array == NULL)
	{
		print_array(array, size);
	}

	print_array(array, size);

        for (i = 0; i < size - 1; i++)
        {
                /** assuming the smallest value is at idx i */
                min_idx = i;
                for (j = i + 1; j < size; j++)
                {
                        /**change idx when another small found*/
			if (array[j] < array[min_idx])
                        {
                                min_idx = j;
                        }
                }
                /**Finally swap the values in the indexes*/
                
		if (min_idx != i)
                {
                        temp = array[i];
                        array[i] = array[min_idx];
                        array[min_idx] = temp;
			print_array(array, size);

                }
        }
}
