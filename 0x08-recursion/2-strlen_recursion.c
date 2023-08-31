#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @c:string
 * Return: the length of a string.
 */
int _strlen_recursion(char *c)
{
	if (*c == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(c + 1));
}
