#include “main.h”
/**
   *more_numbers - print series of numbers
   *
   * Return : void
   */
void more_numbers(void)
{
	char a;
	int b = 0

	while (b < 10)
	{
		for (a = ‘0’; a < 15; a++)
		{
			_putchar(a);
		}
	_putchar(b);
	}
	_putchar(‘\n’);
}
