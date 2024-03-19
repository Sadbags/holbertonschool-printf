# Printf Proyect

# Proyect Objective
The objective of this project is to create a printf function that emulates the one in the standard library. 

How to use github with a collaborator


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

* _printf:
* main.h
* man_3_printf
* README.md

# Authors
* Bryan Garcia:
* Elvin Millan: