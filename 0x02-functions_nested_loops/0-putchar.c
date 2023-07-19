#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char arr[] = "_putchar";
	int counter;

	for (counter = 0; counter < 8; counter++)
	{
		_putchar(arr[counter]);
	}
	_putchar('\n');
	return (0);
}
