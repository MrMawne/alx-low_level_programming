#include "main.h"

/**
 * _isalpha - shows 1 input if the input is a
 * letter uppercase or lowercase. Anther cases shows
 * 0
 * @c : the character in ASCII code
 *
 * Return: 0
*/

int _isalpha(int c)
{
	int c;

	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');

}
