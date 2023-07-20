#include "main.h"
#include <ctype.h>
/**
 * _isalpha - checks if a character is a letter
 *
 * @c: used to test if a character is indeed a letter
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
