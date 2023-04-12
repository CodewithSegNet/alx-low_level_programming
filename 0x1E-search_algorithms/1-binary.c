#include "search_algos.h"

/**
 * print_array - Prints the contents of an array.
 * @array: The source of the array to print.
 * @l: The left index of the array.
 * @r: The right index of the array.
 */
void print_array(int *array, size_t R, size_t e)
{
	size_t s;

	if (array)
	{
		printf("Searching in array: ");
		for (s = R; s < R + (e - R + 1); s++)
			printf("%d%s", *(array + s), s < R + (e - R) ? ", " : "\n");
	}
}

/**
 * binary_search_index - Searches a value in a sorted array using \
 * a binary search.
 * @array: The array to search in.
 * @l: The left index of the array.
 * @r: The right index of the array.
 * @value: The value to look for.
 *
 * Return: The first index of the value in the array, otherwise -1.
 */
int binary_search_index(int *array, size_t R, size_t e, int value)
{
	size_t m;

	if (!array)
		return (-1);
	print_array(array, R, e);
	m = R + ((e - R) / 2);
	if (R == e)
		return (*(array + m) == value ? (int)m : -1);
	if (value < *(array + m))
		return (binary_search_index(array, R, m - 1, value));
	else if (value == *(array + m))
		return ((int)m);
	else
		return (binary_search_index(array, m + 1, e, value));
}

/**
 * binary_search - Searches a value in a sorted array using a binary search.
 * @array: The array to search in.
 * @size: The length of the array.
 * @value: The value to look for.
 *
 * Return: The index of the value in the array, otherwise -1.
 */
int binary_search(int *array, size_t size, int value)
{
	return (binary_search_index(array, 0, size - 1, value));
}
