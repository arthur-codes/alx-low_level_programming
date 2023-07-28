#include "main.h"
#include <string.h>
/**
 * _strcmp - A function to compare two strings
 *
 * @s1: string parameter for testing
 *
 * @s2: string parameter for testing
 *
 * Return: Always 0 or 1
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int len = strlen(s1);

	for (i = 0; i < len; i++)
	{
		if (s1[i] == s2[i])
			return (1);
		else
			return (0);
	}
	return (0);
}
