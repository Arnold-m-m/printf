#include <unistd.h>
#include "main.h"

/**
 * _putchar - func that prints char with stdout
 * @ch: char to print
 * Return: return Output.
 */

int _putchar(char ch)
{
	static int cont;
	static char buff[1024];

	if (ch == -1)
	{
		cont = 0;
		return (0);
	}
	if (ch == -2 || cont == 1024)
	{
		write(1, buff, cont);
		cont = 0;
	}
	if (ch != -1 && ch != -2)
	{
		buff[cont] = ch;
		cont++;
		return (1);
	}
	return (0);
}
