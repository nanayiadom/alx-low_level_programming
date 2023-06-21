#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase
 */

void print_alphabet(void)
{
	char Alp;

	for (Alp = 'a'; Alp <= 'z'; Alp++)
		_putchar(Alp);

	_putchar('\n');
	return (0);
}
