#include "main.h"

/**
 * _puts - prints a string
 *
 * @c: string to print
 * Return: number of byte
*/
int _puts(char *c)
{
int count = 0;
if (c)
{
for (count = 0; c[count] != '\0'; count++)
{
_putchar(c[count]);
}
}
return (count);
}
