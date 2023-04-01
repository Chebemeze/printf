#include "main.h"
#include <stdio.h>
/**
 * prit_int - prints an int.
 * @arg: argument passed.
 * Return: number of times int was printed.
 */

int print_int(va_list arg)
{
	int j;

	j = pritf("%d", va_arg(arg, int));
	return (j);
}
