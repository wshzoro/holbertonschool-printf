#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <string.h>

int _printf(const char *format, ...);
int _putchar(char c);
int p_char(va_list args);
int p_str(va_list args);
int p_percent(va_list args);
int p_int(va_list args);
#endif
