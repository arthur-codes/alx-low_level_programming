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
	int result;
	int i;

	for (i = 0; i < len && s2[i] != '\0' && s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			result = len - len2;
	}
	return (result);
}
