#include "function_pointers.h"

/**
 * array_iterator - A funtion that executes a function given as a
 * parameter on each element of an array
 * @size: array size
 * @action: a pointer to function to use
 * @array: the array
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	
	if (array && action)
	{
		i = 0;
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
