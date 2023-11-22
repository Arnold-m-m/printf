#include "main.h"

/**
 * printpercent - this prints %
 * @format: format
 * @pa: va_list
 * Return: returns number of characters printed
 */

int printpercent(char *format, va_list pa)
{
	(void)format;
	(void)pa;
	_putchar('%');
	return (1);
}
