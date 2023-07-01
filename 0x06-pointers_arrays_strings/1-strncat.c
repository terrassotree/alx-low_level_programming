#include "main.h"
/**
* _strncat - Concatenates two strings with a specified maximum number of bytes.
* @dest: The destination string to which the source string will be appended.
* @src: The source string that will be appended to the destination string.
* @n: The maximum number of bytes from src to be concatenated.
*
* Return: A pointer to the resulting string dest.
*
* Description: The _strncat function appends the characters from the source string, src,
*              to the end of the destination string, dest. It will use at most n bytes from src,
*              and src does not need to be null-terminated if it contains n or more bytes.
*              The resulting string in dest is null-terminated.
*              This function does not rely on the standard library or functions like printf or puts.
*              The code follows the Betty style guidelines for clean and readable code.
*/
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i = 0;
	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	while (src[i] != '\0' && i < n)
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (dest);
}
