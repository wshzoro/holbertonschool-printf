# holbertonschool-printf
project _printf
# holbertonschool-printf
project _printf

The goal of this project is to recreate the printf function, who consist to print numbers and other values stored in variables.
We have developed a simplified version of printf, using Betty stylecode. Our implementation supports only the basic format specifiers :
%s: prints a string
%c: prints a character
%d / %i : pritns an interger
%%: prints the percentage symbol

The printf function processes the argument list, displays the corresponding values, and returns the total number of printed characters.

flowcharts : 
![Flowchart](https://github.com/user-attachments/assets/d5373dd4-6bcc-4e1e-ab24-191a03358d75)


Installation:

use git clone to clone the repository on your machine: 
git clone https://github.com/wshzoro/holbertonschool-printf

Compile programm with gcc:
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -Wno-format *.c`

Execute the outpout:
./a.out`

Files :
_putchar.c: declare the function putchar

_print_character.c: contains the function s,c,% who print a string of a character or just one character, use in the printf function

_print_number.c: contains the function i and d who prints an interger use too in the printf function

main.h: contain all the prototype and the headers of the project

printf: contain the printf function

man_3_printf : manual of the function printf

Example using:

include "main.h"

int main(void)
{
int count = _printf("Hello, %s! Number: %d\n", "World", 33);
_printf("Characters printed: %d\n", count);
return (0);
}

Output:

Hello, World! Number: 33
Characters printed: 24

authors:
Rachdi Najwa, Boitel-Furlan Julie
