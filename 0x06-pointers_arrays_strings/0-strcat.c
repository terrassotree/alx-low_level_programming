#include "main.h"
/**
 * File: 0-strcat.c
 * Description: Custom implementation of the strcat function.
 * The _strcat function appends the source 'src' string to the destination string 'dest'.
 * It overwrites the terminating null byte of the destination string and then adds a new terminating null byte at the end.
 * Returns: A pointer to the resulting string.
 */
char *_strcat(char *dest, char *src)
{
	char *dest_start = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest_start);
}
