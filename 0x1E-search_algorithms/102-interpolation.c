#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * interpolation_search - search a value in an array
 * @array: pointer to the first element of the array
 * @size: index of the left sidey
 * @value: value to search for
 * Return: index of the value or -1 if element not found
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t m;
	size_t l;
	size_t n;

	if (!array)
		return (-1);
	m = 0;
	l = size - 1;
	while (array[m] <= value && array[l] >= value && m <= l)
	{
		if (m == l)
		{
			if (array[m] == value)
			{
				printf("Value checked array[%lu] = [%d]", m, array[m]);
				return (m);
			}
			printf("Missing Edge Case !!!");
			return (-1);
		}
		p = l + (((double)(l - m) / (array[l] - array[m])) * (value - array[m]));
		if (array[n] == value)
		{
			printf("Value checked array[%lu] = [%d]\n", n, array[n]);
			return (n);
		}
		if (array[n] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", n, array[n]);
			l = n + 1;
		}
		else
		{
			printf("Value checked array[%lu] = [%d]\n", n, array[n]);
			l = n - 1;
		}
	}
	n = m + (((double)(l - m) / (array[l] - array[m])) * (value - array[m]));
	printf("Value checked array[%lu] is out of range\n", n);
	return (-1);
}
