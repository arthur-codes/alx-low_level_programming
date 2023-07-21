#include "main.h"
/**
 * more_numbers - print numbers from 0-14
 *
 * Return: Always 0 or 1
 */
void more_numbers(void)
{
	int counter, number;

	for (counter = 0; counter < 10; counter++)
	{
		for (number = 0; number < 15; number++)
		{
			if (number >= 10)
			{
				_putchar(number / 10 + '0');
			}
			_putchar(number % 10 + '0');
		}
		_putchar('\n');
	}
}
