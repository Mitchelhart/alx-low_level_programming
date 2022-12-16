#include "main.h"
/**
 * _isdigit -  a function that checks for a digit
 *
 * @c: is an input number
 * Return: 1 if is a number
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
