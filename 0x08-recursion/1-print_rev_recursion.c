#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse.
 * @c:string
 * Return: no return.
 */
void _print_rev_recursion(char *c)
{
	if (*c != '\0')
	{
		_print_rev_recursion(c + 1);
		_putchar(*c);
	}
}
