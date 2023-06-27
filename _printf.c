#include "main.h"

/**
 * _printf - Printf function
 * @format: format string.
 * Return: number of characters printed.
 */
int _printf(const char *format, ...)
{
    int i, printed_chars = 0;
    va_list list;
    
    if (format == NULL)
        return (-1);
    
    va_start(list, format);
    
    for (i = 0; format && format[i] != '\0'; i++)
    {
        if (format[i] != '%')
        {
            putchar(format[i]);
            printed_chars++;
        }
        else if (format[i + 1] == '%')
        {
            putchar('%');
            printed_chars++;
            i++;
        }
        else if (format[i + 1] == 'c')
        {
            int c = va_arg(list, int);
            putchar(c);
            printed_chars++;
            i++;
        }
        else if (format[i + 1] == 's')
        {
            char *s = va_arg(list, char *);
            printed_chars += _puts(s);
            i++;
        }
    }
    
    va_end(list);
    
    return (printed_chars);
}

/**
 * _puts - Prints a string.
 * @str: The string to be printed.
 * Return: Number of characters printed.
 */
int _puts(char *str)
{
    int i, count = 0;
    
    if (str == NULL)
        str = "(null)";
    
    for (i = 0; str[i] != '\0'; i++)
    {
        putchar(str[i]);
        count++;
    }
    
    return (count);
}

/**
 * putchar - Writes a character to stdout.
 * @c: The character to be written.
 * Return: On success, the character written is returned.
 *         On error, -1 is returned.
 */
int putchar(int c)
{
    return (write(1, &c, 1));
}
