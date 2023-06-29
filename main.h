#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

int str_len(char *s);
int _putchar(char c);
int prt_str(char *str);
int print_int(int _n);
int format_specifier(const char *f, va_list args);
int _printf(const char *format, ...);

#endif
