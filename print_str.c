#include "main.h"

/**
 * printstr- this prints str.
 * @pa: gtgtg
 * @format: format str.
 * Return: returns number str for print.
 */

int printstr(char *format, va_list pa)
{
	char *strng = va_arg(pa, char *);
	int conta;
	(void)format;

	if (strng == NULL)
		strng = "(null)";
	conta = _puts(strng);
	return (conta);
}
