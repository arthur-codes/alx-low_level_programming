#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * rev_string - reverses a string
 *
 * @s: string parameter for testing
 *
 * Return: Always 0
 */
void rev_string(char *s)
{
	int i, j;
	int len = strlen(s);
	char temp;

	for (i = 0, j = len - 1; i < j ; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
