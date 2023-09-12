#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char array[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(array[i]);
	}
	_putchar('\n');
	return (0);
}
