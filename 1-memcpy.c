#include "main.h"

/**
 * _memcpy - a function that copiesmemory area
 * @dest: memory where is stored
 * @src: memory where is copied
 * Return: copiedmemory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
