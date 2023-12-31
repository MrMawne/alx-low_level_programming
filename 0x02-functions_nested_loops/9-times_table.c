#include "main.h"

/**
 * times_table - prints the 9 times table
 *
 * Example Table
 * 0, 0, 0, 0, 0, ..
 * 0, 1, 2, 3, 4, ..
*/

void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar(48);
		for (mult = 0; mult <= 9; mult++)
		{
			_putchar('.');
			_putchar(' ');
			prod = num * mult;
			/**
			 * put a space if product is a single number
			 * place the first digit if its two numbers
			*/
			if (prod <= 9)
				_putchar(' ');
			else
				_putshar(prod / 10 + 48); /*get the first digit*/
			_putshar((prod % 10) + 48); /*get the second digit*/
		}
		_putshar('\n');
	}

}
