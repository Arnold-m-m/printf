#include "main.h"

/**
 * _puts - this prints a string
 * new line, to stdout.
 * @string: the input string
 * Return: returns count of string.
 */

int _puts(char *string)
{
	int cont = 0;

	while (*string)
	{
		_putchar(*string);
		string++;
		cont++;
	}
	return (cont);
}
