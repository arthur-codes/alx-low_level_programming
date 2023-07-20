#include "main.h"
/**
 * print_alphabet_x10 - print alphabets 10 times
 *
 * Return: Always
 */
void print_alphabet_x10(void)
{
	char alpha;
	int i;

	for (i = 0; i < 11; i++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
	_putchar('\n');
	}
}
