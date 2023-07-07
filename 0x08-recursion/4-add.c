#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
/*
 *main - a program that adds positive numbers

 * @argc: input
 * @argv: array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("0\n");
	return (0);
	}
	int sum = 0;
	int i, j;

	for (i = 1; i < argc; i++)
	{
	for (j = 0; argv[i][j] != '\0'; j++)
	{
	if (isdigit(argv[i][j]))
	{
	printf("Error\n");
	return (1);
	}
	}
	sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
