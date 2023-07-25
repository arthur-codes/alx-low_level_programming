#include "main.h"
#include <string.h>
/**
 * puts_half - a function to print the half of a string
 *
 * @str: A string parameter
 */
void puts_half(char *str)
{
	int i;
	int len = strlen(str) - 1;
	int half = len / 2;

	if (len % 2 != 0)
	{
		half = half - 1;
	}
	for (i = half; i <= len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
