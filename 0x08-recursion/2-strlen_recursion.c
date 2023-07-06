#include "main.h"
/**
 * _strlen_recursion - Calculates the length of a string using recursion
 * @s: A pointer to a character representing the string
 *
 * Description:
 * The _strlen_recursion function is a recursive function that calculates the
 * length of a string. It takes a pointer to a character (a string) as a
 * parameter and recursively counts the number of characters until it reaches
 * the end of the string.
 *
 * Return: The length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
