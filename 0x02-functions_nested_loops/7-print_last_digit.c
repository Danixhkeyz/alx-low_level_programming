#include "main.h"
/**
 * print_last_digit - Print the last digit of an integer
 * @n - number to be treated
 * Return: Absolute value of number or zero 
 */

int print_last_digit(int n)

{
	int last;

	last = n % 10;
	if (last < 0)
	{
		last = last * -1;

	}

	_putchar(last + '0');
	return (last);

}
