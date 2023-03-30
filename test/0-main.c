#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;

	len = _printf("%s%c%c%c%s%%%s%c", "\nLoading ", '.', '.', '.', " 99", " Please wait", '\n');
	printf("%d\n", len);
	printf("\nDefault printf function\n");
	len2 = printf("%s%c%c%c%s%%%s%c", "\nLoading ", '.', '.', '.', " 99", " Please wait", '\n');
	printf("%d\n", len2);

	return (0);
}
