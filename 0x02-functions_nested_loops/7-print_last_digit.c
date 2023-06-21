#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	int a;

	print_last_digit(98);
	print_last_digit(0);
	a = print_last_digit(-1024);
	_putchar('0' + a);
	_putchar('\n');
	return (0);
}
