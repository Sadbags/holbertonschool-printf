#include "main.h"

/**
 * _printf - prints anything
 * @format: string to print
 *
 * Return: total count of characters printed
*/
int _printf(const char *format, ...)
{
int i = 0, count = 0;
va_list valist;
va_start(valist, format);
if (format == NULL)
return (-1);
while (format[i] != '\0')
{
if (format[i] == '%' && format[i + 1] != '\0')
{
if (format[i + 1] == '%')
{
count += _putchar(format[i++]);
i += 2;
}
else if (format[i = 1] == 'c')
{
    char ch = va_arg(valist, int);
    count += _putchar(ch);
    i += 2;
}
else
{
    count += _putchar('%');
    i++;
}
}
else
{
    count += _putchar(format[i]);
    i++;
}
}
va_end(valist);
return (count);

}
