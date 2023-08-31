#include "main.h"
/**
 * factorial - The factorial of a number
 *
 * @n: Parameter
 *
 * Return: Always 1 or 0
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
