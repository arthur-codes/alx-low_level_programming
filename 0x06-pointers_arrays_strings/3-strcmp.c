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
	int i;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	result = s1[i] - s2[i];
	return (result);
}
