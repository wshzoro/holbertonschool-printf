#include "main.h"

/**
 * _printf - unction that produces output according to a format
 * @format: is a character string
 *
 * Return: he number of characters printed
 */
int _printf(const char *format, ...)
{
va_list args;
int len = 0;

if (!format)
return (-1);

va_start(args, format);
while (*format)
{
if (*format == '%' && (format + 1))
{
format++;
if (*format == 's')
len += pr_str(args);
else if (*format == 'c')
len += p_char(args);
else if (*format == '%')
len += p_percent(args);
else
{
_putchar('%');
_putchar(*format);
len += 2;
}
}
else
{
_putchar(*format);
len++;
}
format++;
}
va_end(args);
return (len);
}
