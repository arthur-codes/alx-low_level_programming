#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses an array
 *
 * @a: an array of integers
 *
 * @n: number of elements
 */
void reverse_array(int *a, int n)
{
	int end = n - 1;
	int start = 0;
	int temp;

	while (start < end)
	{
		temp = a[start];
		a[start] = a[end];
		a[end] = temp;
		start++;
		end--;
	}
}
