#include "main.h"
/**
 * print_sign - check whether there's a sign or not
 *
 * @n: for testing
 *
 * Return: 1, 0, -1 depending on the sign
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
