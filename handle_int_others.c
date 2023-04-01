#include "main.h"
#include <stdio.h>
/**
 * print_int - prints an int.
 * @arg: argument passed.
 * Return: number of times int was printed.
 */

int print_int(va_list arg)
{
	int q, c;

	int division_num, p,  j;

	c = va_arg(arg, int);
	division_num = 1;
	if (c < 0)
	{
		j = -c;
		_putchar('-');
		p = j;
	}
	else
	{
		j = c;
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
