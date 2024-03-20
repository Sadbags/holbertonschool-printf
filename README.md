# Printf proyect
Hello welcome to our first group proyect;)

# Proyect Objective
The objective of this project is to create a printf function that emulates the one in the standard library. 

How to use github with a collaborator
#Eviroment
Language: C
Style guidelines: Betty style

# Prototype in use
int _printf(const *format ...)


# Format Specifiers

The format specifiers when printing numbers, strings or characters are:

* %c - prints a character
* %s - prints a string
* %i - prints a number from -2,147,483,648 to 2,147,483,647
* %d - prints a number from -2,147,483,648 to 2,147,483,647

# Example for format specifiers:

#include "main.h"

int main(void)
{
    _printf("This is gonna print a character: %c\n\n", 'C');
    _printf("This is gonna print a string: %s\n\n", "String");
    _printf("This is gonna print a number using the i specifier: %i\n\n", 20);
    _printf("This is gonna print a number using the d specifier: %d\n\n", 20);

    return (0);
}

The output will be:

* This is gonna print a character: C
* This is gonna print a string: string
* This is gonna print a number using the i specifier: 20
* This is gonna print a number using the d specifier: 20

# Files 

* _printf.c: main function
* main.h: header file
* man_3_printf: Man page
* README.md: this file
* _putchar.c: putchar function
* printf_str.c: printf_str function
* printf_int.c: print_int function
* printf_bin.c: print_bin function
# Flowchart
![image](https://github.com/Sadbags/holbertonschool-printf/assets/159051688/ddf57731-9d80-4dee-91f9-0354ec869964)

# Authors
* Bryan Garcia:
* Elvin Millan:
