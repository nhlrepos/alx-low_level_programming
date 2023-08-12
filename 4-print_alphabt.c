#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	char alpha[26]="abcdefghijklmnopqrstuvwxyz";

	for(i=0;i<26;i++)
	{
		if(alpha[i]!='e' && alpha[i]!='q')
		{
			putchar(alpha[i]);
		}
	}

	putchar('\n');
	return (0);
}
