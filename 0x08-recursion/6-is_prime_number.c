/**
 * is_prime_number - Checks if a number is a prime number
 * @n: The number to be checked
 *
 * Description:
 * The is_prime_number function checks if a given number is a prime number.
 * It takes an integer parameter 'n' and recursively checks if 'n' is divisible
 * by any number from 2 up to the square root of 'n'.
 * If 'n' is divisible by any
 * of these numbers, it is not a prime number
 * and the function returns 0. If 'n'
 * is not divisible by any of these numbers,
 * it is a prime number and the function
 * returns 1.
 *
 * Return: 1 if 'n' is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_number(n));
}

/**
 * is_prime_recursive - Helper function to check for prime recursively
 * @n: The number to be checked
 * @divisor: The current divisor being checked
 *
 * Return: 1 if 'n' is a prime number, 0 otherwise
 */
int is_prime_recursive(int n, int divisor)
{
	if (divisor * divisor > n)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (is_prime_recursive(n, divisor + 1));
}
