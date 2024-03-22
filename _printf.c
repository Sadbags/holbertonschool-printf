#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...) {
    va_list args;
    void *ptr;
    int count = 0;
    va_start(args, format);
    

    while (*format != '\0') {
        if (*format == '%') {
            format++;
            switch (*format) {
                case 'p': 
                    ptr = va_arg(args, void *);
                    count += printf("%p", ptr);
                    break;
                case 'c': 
                {
                    char c = va_arg(args, int);
                    putchar(c);
                    count++;
                    break;
                }
                case 's': 
                {
                    char *str = va_arg(args, char *);
                    count += printf("%s", str);
                    break;
                }
                case 'd':
                case 'i':
                {
                    int num = va_arg(args, int);
                    count += printf("%d", num);
                    break;
                }
                case 'u': 
                {
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
                case 'X':
                {
                    unsigned int num = va_arg(args, unsigned int);
                    count += printf("%x", num);
                    break;
                }
                case 'r': 
                {
                    count += printf("%%r");
                    break;
                }
                default:
                    count += printf("%%");
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

