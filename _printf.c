#include "main.h"

/**
 * _printf - function that produces output according to a format
 * @format: is a character string
 *
 * Return: he number of characters printed
 */
int _printf(const char *format, ...)
{
va_list args;
int count = 0;

if (format == NULL)
return (-1);

va_start(args, format);
while (*format)
{
if (*format == '%')
{
format++;
if (*format == 's')
count += p_str(args);
else if (*format == 'c')
count += p_char(args);
else if (*format == '%')
count += p_percent(args);
else
{
_putchar('%');
_putchar(*format);
count += 2;
}
}
else
{
_putchar(*format);
count++;
}
format++;
}
va_end(args);
return (count);
}
