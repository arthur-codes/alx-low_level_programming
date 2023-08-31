#include "main.h"
/**
 * _pow_recursion - finds the power of a given numeral
 *
 * @x: first parameter
 *
 * @y: second parameter
 *
 * Return: Always 1 or 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return  (x * _pow_recursion(x, y - 1));
}
