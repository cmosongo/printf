#include "main.h"

/**
 * cleanup - Peforms cleanup operations for _printf.
 * @args: A va_list of arguments provided to _printf.
 * @output: A buffer_t struct.
 */
void cleanup(va_list args, buffer_t *output)
{
    va_end(args);
    write(1, output->start, output->len);
    free_buffer(output);
}

/**
 * convert_c - Converts and prints a single character.
 * @args: A va_list of arguments provided to _printf.
 * @output: A buffer_t struct.
 *
 * Return: The number of characters printed.
 */
unsigned int convert_c(va_list args, buffer_t *output)
{
    char c = (char)va_arg(args, int);
    return _memcpy(output, &c, 1);
}

/**
 * convert_s - Converts and prints a string.
 * @args: A va_list of arguments provided to _printf.
 * @output: A buffer_t struct.
 *
 * Return: The number of characters printed.
 */
unsigned int convert_s(va_list args, buffer_t *output)
{
    char *str = va_arg(args, char *);
    if (str == NULL)
        str = "(null)";
    return _memcpy(output, str, _strlen(str));
}

/**
 * convert_percent - Prints a percent sign.
 * @args: A va_list of arguments provided to _printf.
 * @output: A buffer_t struct.
 *
 * Return: The number of characters printed.
 */
unsigned int convert_percent(va_list args, buffer_t *output)
{
    (void)args;
    return _memcpy(output, "%", 1);
}

/**
 * run_printf - Reads through the format string for _printf.
 * @format: Character string to print - may contain directives.
 * @output: A buffer_t struct containing a buffer.
 * @args: A va_list of arguments.
 * Return: The number of characters stored to output.
 */
int run_printf(const char *format, va_list args, buffer_t *output)
{
    int i, ret = 0;
    char tmp;

    for (i = 0; format && format[i]; i++)
    {
        if (format[i] == '%')
        {
            tmp = 0;
            switch (format[i + 1])
            {
                case 'c':
                    ret += convert_c(args, output);
                    break;
                case 's':
                    ret += convert_s(args, output);
                    break;
                case '%':
                    ret += convert_percent(args, output);
                    break;
                default:
                    ret += _memcpy(output, &format[i], 1);
                    break;
            }
            i++;
        }
        else
        {
            ret += _memcpy(output, &format[i], 1);
        }
    }
    cleanup(args, output);
    return (ret);
}

/**
 * _printf - Outputs a formatted string.
 * @format: Character string to print - may contain directives.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *format, ...)
{
    buffer_t *output;
    va_list args;
    int ret;

    if (format == NULL)
        return (-1);

    output = init_buffer();
    if (output == NULL)
        return (-1);

    va_start(args, format);
    ret = run_printf(format, args, output);
    va_end(args);

    return (ret);
}
