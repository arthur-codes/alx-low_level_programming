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
	int len = strlen(s1);
	int len2 = strlen(s2);

		if (len == len2)
			return (0);
		else if (len < len2)
			return (-15);
		else
			return (15);
}
