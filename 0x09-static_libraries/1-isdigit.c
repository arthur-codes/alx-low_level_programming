#include "main.h"
#include <ctype.h>
/**
 * _isdigit - check  if a character is a digit
 *
 * @c: parameter testing
 *
 * Return: Always 1 or 0
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
