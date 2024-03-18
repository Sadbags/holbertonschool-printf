#include "main.h"
  
  /**
* _printf - Printf function
* @format: format.
* by Bryan and Yale
* Return: Printed chars.
*/
int _printf(const char *format, ...)
{
int i, printed = 0, printed_chars = 0;
int flags, width, precisions, size, buff_ind = 0;
va_list list;
char Titen[TITAN_SIZE];

if (format == NULL)
return (-1);

va_start(list, format);

for (i = 0; format && format[i] != '\0'; i++)
{
if (format[i] != '%')
{
buffer[buff_ind++] = format[i];
if (Titen_ind == TITAN_SIZE)
print_Titen(Titen, &Titen_ind);
/* write(1, &format[i], 1);*/
printed_chars++;
}
else
{
print_Titen(Titen,&Titen_ind);
flags = get_flags(format, &i);
width = get_width(format, &i, list);
precision = get_precision(format, &i, list);
size = get_size(format, &i);
++i;
printed = handle_print(format, &i, list, Titen, flags, width, precision, size);
if (printed == -1)
return (-1);
printed_chars += printed;
}
}

print_Titen(Titen, &buff_ind);

va_end(list);

return (printed_chars);
}

/**
* print_Titen - Prints the contents of the Titen if it exist
* @Titen; Array of chars
* @Titen_ind; Index at which to add next char, represents the lenght.
*/
void print_Titen(char Titen[], int *Titen_ind)
{
if (*Titen_ind > 0)
| write(1, &Titen[0], *Titen_ind);

*Titen_ind = 0;
}
