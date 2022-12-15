#include "main.h"
#include <stdio.h>

/**
 * main - print 1-100 and for multiple of 3 Fizz
 *        for multiple of 5 Buzz and for both FizzBuzz
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		} else if (i % 3 == 0)
		{
			printf("Fizz");
		} else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i == 100)
			continue;
		printf(" ");
	}
	printf("\n");

	return (0);
}
