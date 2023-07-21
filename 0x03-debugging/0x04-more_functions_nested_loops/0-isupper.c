#include "main.h"
#include <ctype.h>
/**
 * _isupper - checks if a letter is an upper case letter
 *
 * @c: parameter for testing
 *
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
