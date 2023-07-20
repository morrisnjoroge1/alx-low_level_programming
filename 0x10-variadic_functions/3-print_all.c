#include "variadic_functions.h"

/**
 * print_all - Prints all of the arguments when specified
 * @format: specifies the necessary operations
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int i;
	int flag;
	char *str;
	va_list a_list;

	 va_start(args, format);
