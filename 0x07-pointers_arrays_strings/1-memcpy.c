#include "main.h"

/**
 * _memcpy - copies memory area.
 * @n: number of bytes
 * @src: memory area
 * @dest: memory area
 *
 * Return: dest
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
