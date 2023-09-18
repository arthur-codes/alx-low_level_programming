#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - a functon to allocate memory
 *
 * @b: a parameter for testing
 *
 * Return: Always success
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(sizeof(int));
	if (p == NULL)
		exit(98);
	return (p);
}
