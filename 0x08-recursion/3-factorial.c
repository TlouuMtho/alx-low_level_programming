#include "main.h"

/**
 * factorial - A function that returns a factorial of a given number
 * @n: integer
 *
 * Return: an integer
 */
int factorial(int n)
{
	int x;

	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		x = n * factorial(n - 1);
	}
	return (x);
}
