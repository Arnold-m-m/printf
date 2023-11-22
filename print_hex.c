#include "main.h"

/**
 * printhex - this prints a hexadecimal
 * @format: format to print hexadecimal
 * @pa: list that contains the hexadecimal
 * Return: returns number.
 */

int printhex(char *format, va_list pa)
{
	unsigned int numb = va_arg(pa, unsigned int);
	unsigned int num2;
	int ii, i2, copy, contame = 0;
	char *numhex;

	(void)format;

	if (numb == 0)
		return (_putchar('0'));
	for (num2 = numb; num2 != 0; contame++)
	{
		num2 = num2 / 16;
	}
	numhex = malloc(contame);
	for (ii = 0; numb != 0; ii++)
	{
		copy = numb % 16;
		if (copy < 10)
			numhex[ii] = copy + '0';
		else
			numhex[ii] = copy - 10  + 'a';
		numb = numb / 16;
	}
	for (i2 = ii - 1; i2 >= 0; i2--)
		_putchar(numhex[i2]);
	free(numhex);
	return (contame);
}

/**
 * printHEX - prints a hexadecimal
 * @format: format to print hexadecimal
 * @pa: va_list that contains the hexadecimal to print
 * Return: number of digits printed
 */

int printHEX(char *format, va_list pa)
{
	unsigned int NUMB = va_arg(pa, unsigned int);
	unsigned int NUM2;
	int II, I2, COPY, CONTAME = 0;
	char *NUMHEX;

	(void)format;

	if (NUMB == 0)
		return (_putchar('0'));
	for (NUM2 = NUMB; NUM2 != 0; CONTAME++)
	{
		NUM2 = NUM2 / 16;
	}
	NUMHEX = malloc(CONTAME);
	for (II = 0; NUMB != 0; II++)
	{
		COPY = NUMB % 16;
		if (COPY < 10)
			NUMHEX[II] = COPY + '0';
		else
			NUMHEX[II] = COPY - 10 + 'A';
		NUMB = NUMB / 16;
	}
	for (I2 = II - 1; I2 >= 0; I2--)
		_putchar(NUMHEX[I2]);
	free(NUMHEX);
	return (CONTAME);
}
