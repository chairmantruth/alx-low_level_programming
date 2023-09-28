#include <stdio.h>
#include "main.h"

/**
 *_puts_recursion - print a dtring with recursion
 *@s: string that we need to print
 * Return: no return
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);

	}
	else
		_putchar('\n');

}

