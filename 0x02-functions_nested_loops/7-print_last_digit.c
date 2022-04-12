#include "main.h"

/**
 * print_last_digit - print last digit of integer
 * @n: integer argument
 * Return: last digit of number
 */

int print_last_digit(int n)
{
int lastDigit = n % 10;
	
	if (n < 0)
		n *= -1;
	_putchar('0' + lastDigit);
	_putchar('\n');

	return (lastDigit);
}
