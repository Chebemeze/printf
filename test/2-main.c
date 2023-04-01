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

	len = _printf("first number: %d\n", -478);
	printf("%d\n", len);
	printf("\nDefault printf function\n");
	len2 = printf("first number: %d\n", -478);
	printf("%d\n", len2);

	return (0);
}
