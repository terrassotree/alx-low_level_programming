/**
 * _pow_recursion - Calculates the value of x raised to the power of y
 * @x: The base number
 * @y: The exponent
 *
 * Description:
 * The _pow_recursion function calculates
 * the value of x raised to the power of y.
 * It takes two integers 'x' and 'y' as
 * parameters and recursively multiplies 'x'
 * by itself (x * x) 'y' times until 'y' reaches 0. If 'y' is less than 0, the
 * function returns -1 to indicate an error.
 *
 * Return: The value of x raised to the power of y, or -1 if 'y' is less than 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
