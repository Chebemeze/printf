#include "main.h"
#include <stdio.h>
/**
 * print_int - prints an int.
 * @arg: argument passed.
 * Return: number of times int was printed.
 */

int print_int(va_list arg)
{
	int q;

	int division_num, p,  j;

	division_num = 1;
	if (va_arg(arg, int) < 0)
	{
		j = -(va_arg(arg, int));
		_putchar('-');
		p = j;
	}
	else
	{
		j = va_arg(arg, int);
		p = j;
	}

	while (j >= 10)
	{
		division_num = division_num * 10;
		j = j / 10;
	}

	q = 0;
	while (division_num > 0)
	{
		_putchar(((p / division_num) % 10) + '0');
		division_num = division_num / 10;
		q++;
	}

	return (q);
}
