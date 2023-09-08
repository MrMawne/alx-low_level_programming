#include <stdio.h>
/**
 * main: Entry point
 *
 * Description: A C program that prints sizeof function
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char c;
	double d;
	float f;
	int i;

	printf("char: %i\n",sizeof(c));
	printf("double: %i\n",sizeof(d));
	printf("float: %i\n",sizeof(f));
	printf("int: %i\n",sizeof(i));
	return(0);
}
