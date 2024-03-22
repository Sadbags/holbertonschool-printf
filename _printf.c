#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

int _printf(const char *format, ...) 
{
    va_list args;
    int count = 0;
    va_start(args, format);

    if (strcmp(format, "%") == 0) {
        return 0;
    }

    while (*format != '\0') {
        if (*format == '%') {
            format++;
            if (*format == '\0') { 
                putchar('%');
                count++;
                break; 
            }
            switch (*format) {
                case 'p': {
                    void *ptr = va_arg(args, void *);
                    count += printf("%p", ptr);
                    break;
                }
                case 'c': {
                    char c = (char) va_arg(args, int);
                    putchar(c);
                    count++;
                    break;
                }
                case 's': {
                    char *str = va_arg(args, char *);
                    count += printf("%s", str);
                    break;
                }
                case 'd':
                case 'i': {
                    int num = va_arg(args, int);
                    count += printf("%d", num);
                    break;
                }
                case 'u': {
                    unsigned int num = va_arg(args, unsigned int);
                    count += printf("%u", num);
                    break;
                }
                case 'o': {
                    unsigned int num = va_arg(args, unsigned int);
                    count += printf("%o", num);
                    break;
                }
                case 'x': 
                case 'X': {
                    unsigned int num = va_arg(args, unsigned int);
                    count += printf("%x", num);
                    break;
                }
                case 'r': {
                    count += printf("%%r");
                    break;
                }
                case '%': {
                    putchar('%');
                    count++;
                    break;
                }
                default:
                    putchar('%');
                    count++;
                    putchar(*format);
                    count++;
                    break;
            }
        } else {
            putchar(*format);
            count++;
        }
        format++;
    }

    va_end(args);
    return count;
}
