#include "function_pointers.h>"

/**
 * int_index - A funtion that searches for an integer
 * @size: number of elements in the array array
 * @array: array of integers
 * @cmp: a pointer to the function used to compare values
 *
 * Return: int
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
