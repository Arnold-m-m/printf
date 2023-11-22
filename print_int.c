#include "main.h"
/**
 * _abs - this calculates the absolute value.
 * @number: input.
 * Return: returns value.
 */
int _abs(int number)
{
	if (number < 0)
		return (-1 * number);
	else
		return (number);
}

/**
 * contadordigit - this counts the digits.
 * @number: input integer
 * Return: retuns digit count
 */

int contadordigit(int number)
{
	int counter = 0;
	int number2 = number;

	if (number <= 0)
		counter += 1;

	while (_abs(number2) != 0)
	{
		number2 = number2 / 10;
		counter++;
	}
	return (counter);
}

/**
 * integer - this function that prints an integer.
 * @number: input integer
 * Return: returns digit count
 */

int integer(int number)
{
	unsigned int uninteger;
	int counter;

	counter = contadordigit(number);
	if (number < 0)
	{
		_putchar('-');
	uninteger = -number;
	}
	else
		uninteger = number;

	if (uninteger >= 10)
		integer(uninteger / 10);
	_putchar(uninteger % 10 + '0');

	return (counter);
}

/**
 * printint - this prints a number
 * @format: format to print number
 * @pa: va_list with number to print
 * Return: returns number of chars printed
 */

int printint(char *format, va_list pa)
{
	int num = va_arg(pa, int);
	int numero;
	(void)format;

	numero = integer(num);

	return (numero);
}
