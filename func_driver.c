#include "main.h"

/**
 * driver - the selector for type of function
 * @format: str
 * Description: function loops through structs
 * selector[] ment of the struct.
 * Return: returns pointer
 * structype selector - Struct
 */

int (*driver(char *format))(char *format, va_list)
{
	int ii;

	structype selector[] = {
	{"%c", printc},
	{"%s", printstr},
	{"%d", printint},
	{"%i", printint},
	{"%%", printpercent},
	{"%x", printhex},
	{"%X", printHEX},
	{"%o", printocta},
	{NULL, NULL}
	};

	if (format[1] == ' ' || format[1] == '\0')
	return (NULL);
	for (ii = 0; selector[ii].q; ii++)
	{
		if (format[1] == selector[ii].q[1])
		return (selector[ii].u);
	}
	return (NULL);
}
