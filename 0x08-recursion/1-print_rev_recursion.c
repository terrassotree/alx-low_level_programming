#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse using recursion
 * @s: A pointer to a character representing
 * the string to be printed in reverse
 *
 * Description:
 * The _print_rev_recursion function is
 * a recursive function that prints a string
 * character by character in reverse order.
 * It takes a pointer to a character (a
 * string) as a parameter and recursively
 * prints each character in reverse order
 * until it reaches the end of the string.
 *
 * Return: None
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
