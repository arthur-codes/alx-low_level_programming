#include "main.h"
/**
 * main - Entry point
 *
 * void print_alphabet(void) - a function to print alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
	return (0);
}
