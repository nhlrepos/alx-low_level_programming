#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	char alpha[26]="abcdefghijklmnopqrstuvwxyz"
	int i;
	for(i=26;i>0;i--)
	{
		printf("%d",i);
	}

	putchar('\n');
	return (0);
}
