#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_number(int n);
int print_unsigned(unsigned int num);
int print_octal(unsigned int num);
int print_hexadecimal(unsigned int num, int uppercase);
int print_address(void *ptr);

#endif
