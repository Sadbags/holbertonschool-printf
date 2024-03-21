#include "main.h"

/**
 * print_unsigned - Prints an unsigned integer
 * @num: The unsigned integer to print
 *
 * Return: Number of characters printed
 */
int print_unsigned(unsigned int num)
{
    int count = 0;
    unsigned int divisor = 1;

    while (num / divisor > 9)
        divisor *= 10;

    while (divisor != 0)
    {
        count += _putchar(num / divisor + '0');
        num %= divisor;
        divisor /= 10;
    }

    return (count);
}

/**
 * print_octal - Prints an octal number
 * @num: The octal number to print
 *
 * Return: Number of characters printed
 */
int print_octal(unsigned int num)
{
    int count = 0;
    unsigned int octal[100];
    int i = 0;

    while (num != 0)
    {
        octal[i] = num % 8;
        num /= 8;
        i++;
    }

    for (i -= 1; i >= 0; i--)
        count += _putchar(octal[i] + '0');

    return (count);
}

/**
 * print_hexadecimal - Prints a hexadecimal number
 * @num: The hexadecimal number to print
 * @uppercase: Whether to print uppercase (1) or lowercase (0) letters
 *
 * Return: Number of characters printed
 */
int print_hexadecimal(unsigned int num, int uppercase)
{
    int count = 0;
    char hex_digits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};

    if (uppercase)
    {
        hex_digits[10] = 'A';
        hex_digits[11] = 'B';
        hex_digits[12] = 'C';
        hex_digits[13] = 'D';
        hex_digits[14] = 'E';
        hex_digits[15] = 'F';
    }

    if (num / 16)
        count += print_hexadecimal(num / 16, uppercase);

    count += _putchar(hex_digits[num % 16]);

    return (count);
}

/**
 * print_address - prints the address of a pointer
 * @ptr: pointer whose address to print
 *
 * Return: the number of characters printed
 */
int print_address(void *ptr)
{
    unsigned long int address = (unsigned long int)ptr;
    int count = 0;

    count += _putchar('0');
    count += _putchar('x');
    count += print_hexadecimal(address, 1); // Print with uppercase letters

    return (count);
}

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
