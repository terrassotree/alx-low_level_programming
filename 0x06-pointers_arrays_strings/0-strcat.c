#include "main.h"
/**
 * strcat is a the string concatenation function.
 * The strcat function appends the source string src to the destination string dest,
 * overwriting the terminating null byte of the destination string,
 * and then adds a new terminating null byte at the end.
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
