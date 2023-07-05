#include "main.h"
/**
* main - Entry point of the program
*
* Return: 0 on success, non-zero on failure
*/

/**
* _memset - Fills a memory area with a constant byte.
* @s: Pointer to the memory area to be filled.
* @b: The constant byte to fill the memory with.
* @n: The number of bytes to fill.
*
* Return: Pointer to the memory area @s.
*/

int main(void)
{
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
return (0);
}
