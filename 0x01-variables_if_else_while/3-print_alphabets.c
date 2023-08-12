#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	char alpha[26]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for(i=0;i<52;i++)
	{
		putchar(alpha[i]);
	}

	putchar('\n');
	return (0);
}
