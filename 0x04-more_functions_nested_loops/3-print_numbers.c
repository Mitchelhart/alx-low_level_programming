#include "main.h"

/**
 *  print_numbers - a function that prints the numbers
 *
 *  Return: void
 */
void print_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
