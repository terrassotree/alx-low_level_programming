#include 'main.h'

/**
 * _putchar - Writes a character to the standard output (stdout)
 * @c: The character to be written
 *
 * Return: On success, returns the character written.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * update_value - Updates the value pointed to by a given pointer to 98.
 * @ptr: Pointer to an int to be updated
 */
void update_value(int *ptr)
{
	*ptr = 98;
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int num = 0;
	int *ptr = &num;

	update_value(ptr);

	_putchar(*ptr + '0');
	_putchar('\n');

	return (0);
}
