#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Prints the last digit of a randomly generated number
 * and whether it is greater than 5, less than 6, or 0.
 *
 * Return: Always 0.
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if ((10 % n) > 5)
	{
		printf("Last digit of n is %d and is greater than 5\n", 10 % n);
	}
	else if ((10 % n) < 6 && (10 % n) != 0)
	{
		printf("Last digit of n is %d and is less than 6 and not 0\n", 10 % n);
	}
	else
	{
		printf("Last digit of n is %d and is 0\n", 10 % n);
	}

	return (0);
}
