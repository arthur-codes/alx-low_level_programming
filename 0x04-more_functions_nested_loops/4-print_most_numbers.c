#include "main.h"
/**
 * print_most_numbers - print numbers without 2 and 4
 *
 * Return: Always 0 or 1
 */
void print_most_numbers(void)
{
	int counter;

	for (counter = 0; counter < 10; counter++)
	{
		if (counter == 2 || counter == 4)
		{
			continue;
		}
		_putchar(counter + '0');
	}
	_putchar('\n');
}
