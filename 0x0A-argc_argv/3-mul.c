#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point of program
 *
 * @argc: argument count parameter
 *
 * @argv: argument vector parameter
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", _atoi(argv[1]) * _atoi(argv[2]));
	return (0);
}

/**
 * _atoi - check for integers in a string and convert  them
 *
 * @s: string parameter
 *
 * Return: Always success
 */
int _atoi(char *s)
{
	int sign = 1, i = 0;
	unsigned int res = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		res = (res * 10) + (s[i] - '0');
		i++;
	}
	res *= sign;
	return (res);
}
