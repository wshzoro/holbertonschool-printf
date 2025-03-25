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
 * @str: arguments
 *
 * Return: 1
 */
int p_str(char *str)
{
int i = 0;
str = ("NULL");
while (str[i] != '\0')
{
_putchar(str[i]);
i++;
}
return(1);
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

