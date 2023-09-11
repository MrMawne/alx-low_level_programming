#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point.
 *
 * Description: This program will assign a random number to the variable n.
 *
 * Return: Always 0 (Success).
*/

int main(void)
{
	int n, lastd;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;

	if (lastd > 5)
	{
		printf("Last digit of %d and %d is greater than 5", n, lastd);
	}
	else if (lastd == 0)
	{
		printf("Last digit of %d and %d is 0", n, lastd);
	}
	else if (lastd < 6 && lastd != 0)
	{
		printf("Last digit of %d and %d is less than 6 and not 0", n, lastd);
	}
	printf("\n");
	return (0);
}
