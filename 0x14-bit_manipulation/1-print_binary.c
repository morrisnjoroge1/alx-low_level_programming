#include "main.h"
#include <stdio.h>

/**
 * print_binary -  prints the binary representation of a number.
 *
 * @n: decimal to print
 *
 */
void print_binary(unsigned long int n)
{
        int s;
        unsigned long int tmp;

        if (n == 0)
        {
                printf("0");
                return;
        }

        for (tmp = n, s = 0; (tmp >>= 1) > 0; s++)
                ;

        for (; s >= 0; s--)
        {
                if ((n >> s) & 1)
                        printf("1");
                else
                        printf("0");
        }
}
