#include <stdio.h>
/**
 * main - Entry point of program
 *
 * @argc: argument count parameter
 *
 * @argv: argument vector parameter
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
