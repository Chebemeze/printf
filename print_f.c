#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * _printf - performs same way a printf function does. it prints accprding to
 * the %c, %s, %% format specifiers. if none is found it prints
 * the characters found.
 * @format: the first arguments passed unto the function.
 * Return: the number of characters printed (excluding the null byte
 * used to end output to strings).
 */
int _printf(const char *format, ...)
{
	int i, j, count;
	char *p;
	va_list arg;

	func_t op[] = {
		{"c", print_char},
		{"s", print_string},
		{"d", print_int},
		{"i", print_int}
	};

	va_start(arg, format);

	count = 0;
	i = 0;
	while (*(format + i) != '\0' && format != NULL)
	{
		if (*(format + i) == '%')
		{
			j = 0;
			while (j < 4 && *(format + (i + 1)) != *(op[j].symbol))
			{
				j++;
			}
			if (j < 4)
			{
				count += op[j].f(arg);
			}

			p = "%";
			if (j == 4 && *(format + (i + 1)) == *p)
				count += _putchar('%');
			if (j == 4 && *(format + (i + 1)) == '\0')
				return (-1);
			i += 2;

		}
		else
		{
			count += _putchar(*(format + i));
			i++;
		}
	}
	va_end(arg);
	return (count);
}

/**
 * print_char - prints a character.
 * @arg: the argument passed to the function.
 * Return: returns int h.
 */
int print_char(va_list arg)
{
	int h;

	h = _putchar(va_arg(arg, int));
	return (h);
}

/**
 * print_string - prints the string passed as an argument
 * if sring is equal to null, prints (null).
 * @arg: the argument passed to the function.
 * Return: returns int j.
 */
int print_string(va_list arg)
{
	int j, i;

	char *s = va_arg(arg, char *);

	if (s == NULL)
	{
		char *y = "(null)";

		for (j = 0; y[j]; j++)
		{
			_putchar(y[j]);
		}
		return (j);
	}
	for (i = 0; s[i]; i++)
	{
		 _putchar(s[i]);
	}
	return (i);
}

/**
 * _putchar - writes the character c to stdout.
 * @c: The character to print.
 * Return: returns 1 if successful
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
