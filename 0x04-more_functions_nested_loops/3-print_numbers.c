#include "main.h"
/**
 * print_numbers - print numbers from 0 to 9
 *
 * Return: Always 0 or 1
 */
void print_numbers(void)
{
	int counter;

	for (counter = 0; counter < 10; counter++)
	{
		_putchar(counter + '0');
	}
	_putchar('\n');
}
