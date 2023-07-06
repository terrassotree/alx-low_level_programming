#include "main.h"
/**
 * _sqrt_recursion - Calculates the natural square root of a number
 * @n: The number for which to calculate the square root
 *
 * Description:
 * The _sqrt_recursion function calculates the natural square root of a given
 * number. It takes an integer parameter 'n' and recursively checks if a number
 * squared is equal to 'n'. If found, it returns the square root of 'n'. If 'n'
 * does not have a natural square root, the function returns -1.
 *
 * Return: The natural square root of 'n', or -1 if 'n'
 * does not have a square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (_sqrt_recursion(n));
}
