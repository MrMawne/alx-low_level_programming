#include <stdio.h>

/**
 * main - entry point
 *
 * Description: a program that prints all single digit numbers
 *
 * Return: Always 0
*/

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');

	return (0);
}
