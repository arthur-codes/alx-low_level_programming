#include "main.h"
/**
 * print_diagonal - prints diagonal of an input
 *
 * @n: parameter testing
 *
 * Return: Always 0 or 1
 */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}