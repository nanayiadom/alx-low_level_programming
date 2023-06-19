#include<stdio.h>
/**
 *main - Print alphabet in lowercase and uppercase
 *Return : always 0
 *aph - defines alphabet
 */
int main(void)
{
	char aph([52])= "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
	int i;

	for (i=0; i < 52; i++)
	{
		putchar(aph[i]);

	}
		putchar("\n");
	
	return (0);
