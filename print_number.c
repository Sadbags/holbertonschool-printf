#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to print
 *
 * Return: number of characters printed
 */
int print_number(int n)
{
unsigned int num;
int count = 0;

if (n < 0)
{
_putchar('-');
count++;
num = -n;
}
else
{
num = n;
}

if (num / 10 != 0)
{
count += print_number(num / 10);
}

_putchar(num % 10 + '0');
count++;

return count;
}

/**
 * decimal - process a decimal number
 * @args: The argument list
 * 
 * Return:The number of characters printed
*/
int decimal(va_list args)
{
    int num = va_arg(args, int);

    return(printf("%d", num));
}
