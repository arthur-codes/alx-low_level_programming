#include "main.h"
/**
 * swap_int - a function to swap two integers
 *
 * @a: first parameter to swap
 *
 * @b: Second parameter to swap
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
