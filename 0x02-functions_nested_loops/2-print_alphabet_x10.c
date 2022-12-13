#include "main.h"
/**
 *print_alphabet_x10 - prints 10 times the alphabet
 *
 *Return: void
 */
void print_alphabet_x10(void)
{
	int n = 0;
	int var;

	while (n <= 9)
	{
		for (var = 'a'; var <= 'z'; var++)
			_putchar(var);
		_putchar('\n');
		n++;
	}
}
