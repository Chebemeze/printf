#ifndef MAIN_H_
#define MAIN_H_
#include <stdarg.h>
#include <unistd.h>

typedef struct functs
{
	char *symbol;
	int (*f)(va_list arg);
}func_t;

int _printf(const char *format, ...);
int print_char(va_list arg);
int print_string(va_list arg);
int _putchar(char c);

#endif
