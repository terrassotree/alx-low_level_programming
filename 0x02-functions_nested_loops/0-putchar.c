#include "main.h"
/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char message[] = "_putchar\n";
	unsigned int i;

	for (i = 0; message[i] != '\0'; i++)
		_putchar(message[i]);

	return (0);
}
