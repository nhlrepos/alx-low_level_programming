#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all possible different combinations of two digits.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, m;
        int c =49;

	for (n = 48; n < 58; n++)
	{
		for (m = c; m < 58; m++)
		{
			if (m != n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
                c++;
	}
	putchar('\n');
	return (0);
}
