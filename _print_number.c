#include "main.h"

/**
 * p_int - print a interger
 * @args: arguments
 *
 * Return: Number of characters printed
 */
int p_int(va_list args)
{
int n = va_arg(args, int);
int count = 0;
char buffer[11];
int index = 0;
unsigned int num;

if (n < 0)
{
_putchar('-');
count ++;
num = -n;
}
else
{
num = n;
}
if (num == 0)
{
_putchar('0');
return (1);
}
while (num > 0)
{
buffer[index++] = (num % 10) + '0';
num /= 10;
}
count += index;
while (index > 0)
{
_putchar(buffer[--index]);
}
return (count);
}
