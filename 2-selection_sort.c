#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * selection_sort - Entry Point
 * 
 * @array: array of integers
 * @size: size of integers
 *
 */
void selection_sort(int *array, size_t size)
{
	int sort;
	size_t a, b, min;

	for (a = 0; a < size - 1; a++)
	{
		min = a;
		for (b = a + 1; b < size; b++)
		{
			if (array[b] < array[min])
			{
				min = b;
			}
		}
		if (min != a)
		{
			sort = array[a];
			array[a] = array[min];
			array[min] = sort;
			print_array((const int *)array, size);
		}
	}
}
