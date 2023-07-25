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
	int odd = (len - 1) / 2;

	for (i = half + 1; i <= len; i++)
	{
		if (len == odd)
		{
			_putchar(str[i]);
		}
		_putchar(str[i]);
	}
}
