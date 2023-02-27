#include "main.h"

/**
 * swap_int - swaps the value of 2 integers
 * @a: first swap
 * @b: second swap
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
