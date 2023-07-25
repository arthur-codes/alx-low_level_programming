#include "main.h"
#include <string.h>
/**
 * puts2 - a function to print a string
 *
 * @str: a string parameter
 */
void puts2(char *str)
{
	int i;
	int len = strlen(str) - 1;

	for (i = 0; i <= len; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
