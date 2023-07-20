#include "main.h"
/**
 * print_last_digit - prints the last digit of an integer
 *
 * @c: testing parameter
 *
 * Return: Always 0
 */
int print_last_digit(int c)
{
	int test;

	if (c < 0)
	{
		test = -1 * (c % 10);
		_putchar(test + '0');

		return (test);
	}
	else
	{
		test = c % 10;
		_putchar(test + '0');

		return (test);
	}
}
