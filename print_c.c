#include "main.h"

/**
 * printc - this prints a char.
 * @pa: format of char.
 * @format: format
 * Return: returns number char for printf.
 */

int printc(char *format, va_list pa)
{
	(void)format;
	_putchar(va_arg(pa, int));
	return (1);
}
