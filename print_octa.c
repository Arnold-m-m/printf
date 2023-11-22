#include "main.h"

/**
 * printocta - this prints a hexadecimal
 * @format: format to print hexadecimal
 * @pa: list that contains the hexadecimal
 * Return: returns number.
 */

int printocta(char *format, va_list pa)
{
	unsigned int number = va_arg(pa, unsigned int);
	unsigned int copia;
	char *octa;
	int i, i2 = 0, contame = 0;
	(void)format;

	if (number == 0)
		return (_putchar('0'));
	for (copia = number; copia != 0; i2++)
	{
		copia = copia / 8;
	}
	octa = malloc(i2);
	if (!octa)
		return (-1);
	for (i = i2 - 1; i >= 0; i--)
	{
		octa[i] = number % 8 + '0';
		number = number / 8;
	}
	for (i = 0; i < i2 && octa[i] == '0'; i++)
		;
	for (; i < i2; i++)
	{
		_putchar(octa[i]);
		contame++;
	}
	free(octa);
	return (contame);
}
