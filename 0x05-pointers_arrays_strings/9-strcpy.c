#include "main.h"

/**
 * _strcpy - copy src to dest
 * @dest: destination char array
 * @src: source string literal
 * Return: dest pointer
 */

char *_strcpy(char *dest, char *src)
{
	int idx = 0;

	do {
		dest[idx] = src[idx];
		idx++;
	} while (src[idx - 1] != 0);
	return (dest);
}
