#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/*
 * main - a program that adds positive numbers
 *
 * @argc: holds the number of arguments passed
 * @argv: array pointer that holds the arguments passed
 *
 * Return: Always 0 (Success)
*/
int add_positive_numbers(int argc, char *argv[]);

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}
	int sum_result = add_positive_numbers(argc, argv);

	if (sum_result == -1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", sum_result);
		return (0);
	}
}
/*
 * add_positive_numbers - check if string is number
 *
 * @argc: input
 * @argv: string
 *
 * Return: 1 if not number 0 if not
 */
int add_positive_numbers(int argc, char *argv[])
{
	int result = 0;

	for (int i = 1; i < argc; i++)
	{
		int j = 0;

		while (argv[i][j] != '\0')
		{
			if (!isdigit(argv[i][j]))
			{
				return (-1);
			}
			j++;
		}
		result += atoi(argv[i]);
	}
	return (result);
}
