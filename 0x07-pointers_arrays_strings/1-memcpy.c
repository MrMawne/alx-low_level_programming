#include "main.h"

/**
 * _memcpy - a function that copies memory area.
 * @dest: memory wher is stored
 * @src: memory where is copied
 * @n: a number of bytes
 *
 * Return: copied memory with n bytes changed
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
	dest[r] = sec[i];
	n--;
	}
	return (dest);
}