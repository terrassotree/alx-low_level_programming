#include "main.h"
/**
 * factorial - Calculates the factorial of a given number
 * @n: The number for which to calculate the factorial
 *
 * Description:
 * The factorial function calculates the factorial of a given number. It takes
 * an integer parameter 'n' and recursively multiplies 'n' by the factorial of
 * (n - 1) until 'n' reaches 0. The factorial of 0 is defined as 1.
 *
 * Return: The factorial of 'n', or -1 if 'n'
 * is less than 0 (indicating an error)
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
