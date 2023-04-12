#include "search_algos.h"

/**
 * linear_search - Searches a value in an array using a search.
 * @array: The array to search in.
 * @size: The length of the array.
 * @value: The value to look for.
 *
 * Return: The first index of the value in the array, otherwise -1.
 */

int linear_search(int *array, size_t size, int value)
{
	size_t t;

	for (t = 0; (t < size) && (array); t++)
	{
		if (*(array + t) == value)
		{
			printf("Value checked array[%d] = [%d]\n", (int)t, *(array + t));
			return (t);
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n", (int)t, *(array + t));
		}
	}
	return (-1);
}
