#include "main.h"

/**
 * _printf - this prints formatted data to stdout
 * @format: str that contains format to print
 * Return: number of chars written
 */

int _printf(char *format, ...)
{
	int write = 0, (*structype)(char *, va_list);
	char q[3];
	va_list pa;

	if (format == NULL)
		return (-1);
	q[2] = '\0';
	va_start(pa, format);
	_putchar(-1);
	while (format[0])
	{
		if (format[0] == '%')
		{
			structype = driver(format);
			if (structype)
			{
				q[0] = '%';
				q[1] = format[1];
				write += structype(q, pa);
			}
			else if (format[1] != '\0')
			{
				write += _putchar('%');
				write += _putchar(format[1]);
			}
			else
			{
				write += _putchar('%');
				break;
			}
			format += 2;
		}
		else
		{
			write += _putchar(format[0]);
			format++;
		}
	}
	_putchar(-2);
	return (write);
}
