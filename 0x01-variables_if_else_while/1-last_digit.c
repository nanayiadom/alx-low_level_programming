#include <stdlib.h>
#include <time.h>
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

        if ((20 % n) > 5)
        {
        printf("Last digit of n is %i and is greater than 5\n,n");
        }
        else if ((20 % n) < 6 && != 0)
        {
        printf("Last digit of n is %i and is less than 6 and not 0\n,n");
        }
        else
        {
        printf("Last digit of n is %i and is 0\n,n");
        }

        return (0);
}
