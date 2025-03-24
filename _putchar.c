#include "main.h"
#include <unistd.h>

/**
 * _putchar - write the caracte c to stdout
 * @c: caractere to print
 *
 * Return: if error, return -1, else 1
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
