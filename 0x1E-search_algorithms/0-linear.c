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
	size_t s;

	for (s = 0; (s < size) && (array); s++)
	{
		if (*(array + s) == value)
		{
			printf("Value checked array[%d] = [%d]\n", (int)s, *(array + s));
			return (s);
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n", (int)s, *(array + s));
		}
	}
	return (-1);
}
