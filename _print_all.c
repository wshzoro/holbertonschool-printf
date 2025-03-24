#include "main.h"

/**
 * p_char - print a char
 * @args: arguments
 *
 * Return: 1
 */
int p_char(va_list args)
{
char c;
c = va_arg(args, int);
return (_putchar(c));
}

/**
 * p_str - print a string
 * @args: arguments
 *
 * Return: 1
 */
int p_str(va_list args)
{
int i = 0;
char *str = ("NULL");
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
}

/**
 * p_percent - print the char '%'
 * @args: arguments
 *
 * Return: 1
 */
int p_percent(va_list args)
{
(void)args;
_putchar(37);
return (1);
}

