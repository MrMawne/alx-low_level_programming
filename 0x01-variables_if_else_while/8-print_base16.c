#include <stdio.h>

/**
 * main - entry point
 *
 * Description:a program that prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0
*/

int main(void)
{
	int n;

	for (n = 0; n <= 15; n++)
	{
		putchar(n);
		n++;
	}
	putchar('\n');

	return (0);
}
