#include "main.h"
#include <ctype.h>
/**
 * _islower - checks if there is a lower character
 *
 * @c: a parameter given to _islower
 *
 * Return: Always 1
 */
int _islower(int c)
{
	if (islower(c))
		return (1);
	else
		return (0);
}
