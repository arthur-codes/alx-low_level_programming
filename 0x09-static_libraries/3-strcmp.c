#include "main.h"
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
	int result;

	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	result = *s1 - *s2;
	return (result);
}
