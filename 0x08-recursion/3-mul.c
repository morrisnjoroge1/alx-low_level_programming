#include <stdio.h>
#include <stdlib.h>
/*
* main -  program that multiplies two numbers input in
* @argc: input
* @argv: array
* Return: Error or 1
*/
int main(int argc, char *argv[])
{
int m;

if (argc != 3)
{
printf("Error\n");
return (1);
}
else
{
m = (atoi(argv[1]) * atoi(argv[2]));
printf("%d\n", m);
}
return (0);
}
