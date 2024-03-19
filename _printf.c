#include "main.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * _printf - prints stdout
 * 
 * @format: format specifier
 * Return: number of bytes
*/
int _printf(const char *format, ...)
{
    unsigned int i, count = 0;
    va_list args;
    va_start(args, format);
    for (i = 0; format[i] != '\0'; i++)
    {
        if (format[i] != '%')
        {
            putchar();
        }
    }
}