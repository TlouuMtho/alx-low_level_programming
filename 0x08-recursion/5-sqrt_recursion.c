#include "main.h"

/**
 * check - Square root checker
 * @a: integer
 * @b: integer
 *
 * Return: check result
 */
int check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check(a + 1, b));
}
/**
 * _sqrt_recursion - A function that returns a square root of a number
 * @n: Possible square rooted integer
 *
 * Return: Square root, else -1
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
