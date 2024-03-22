#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <unistd.h>
#include <limits.h>
#include <string.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_number(int n);
int decimal(va_list args);

#endif
