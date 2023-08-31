#include "main.h"
/**
 * _sqrt_recursion_calculate - calculates the square root
 *
 * @n: parameter
 *
 * @check: parameter
 *
 * Return: Always 0 or 1
 */
int _sqrt_recursion_calculate(int n, int check)
{
	int square;

	square = check * check;
	if (square == n)
		return (check);
	else if (square > n)
		return (-1);
	return (_sqrt_recursion_calculate(n, check + 1));
}

/**
 * _sqrt_recursion - prints the square root of a number
 *
 * @n: a parameter for testing
 *
 * Return: Always 1 or 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (_sqrt_recursion_calculate(n, 0));
}

