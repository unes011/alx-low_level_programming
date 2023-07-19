#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Prints the n times table starting from 0
 * @n: The value of n
 */
void print_times_table(int n)
{
int i, j, result;
if (n < 0 || n > 15)
return ;
for (i = 0; i <= n; i++)
{
for (j = 0; j <= n; j++)
{
result = i * j;
if (j != 0)
printf(", ");
if (result < 10 && j != 0)
printf(" ");
if (result < 100)
printf(" ");
printf("%d", result);
}
printf("\n");
}
}

