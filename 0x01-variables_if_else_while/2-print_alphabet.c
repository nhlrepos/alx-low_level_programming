#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	char alpha[26]="abcdefghijklmnopqrstuvwxyz";

	for(i=0;i<26;i++)
	{
		putchar(alpha[i]);
	}

	putchar('\n');
	return (0);
}
