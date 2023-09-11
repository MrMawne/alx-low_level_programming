#include <stdio.h>

/**
 *main - entry poin
 *
 * Description: print alphabet using putchar only
 *
 * Return: Always 0 (Success)
*/

int main(void)
{	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n')
	return (0);
}
