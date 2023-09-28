#include <stdio.h>
#include "main.h"

/**
 * main - print string
 *
 * Return: Always 0
 */

void _puts_recursion (char *s)
{
	_putchar(*s);
	_puts_recursion(*s+1);
}
