#include <stdio.h>

/**
 * main - entry point
 *
 * Description: a program that prints the lowercase alphabet in reverse
 *
 * Return: Always 0
*/

int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');

	return (0);
}
