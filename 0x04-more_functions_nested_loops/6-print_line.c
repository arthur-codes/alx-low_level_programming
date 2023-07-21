#include "main.h"
/**
 * print_line - prints line based on the inputted integer
 *
 * @n: integer parameter to test
 *
 * Return: Always 0 or 1
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

