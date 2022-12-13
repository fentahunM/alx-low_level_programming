#include "main.h"
/**
 *print_last_digit - prints the last digit
 *@n: the input number
 *
 *Return: 0(Success)
 */
int print_last_digit(int n)
{
	int lastd;

	if (n >= 0)
		lastd = n % 10;
	else
		lastd = (n % 10) * -1;
	_putchar('0' + lastd);
	return (lastd);
}
