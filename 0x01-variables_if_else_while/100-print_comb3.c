#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all possible different combinations of two digits.
 * Return: Always 0 (Success)
 */
int main(void)
{
        int i, j;
        int c=48;

        for(i=48;i<58;i++)
        {
            for(j=c;j<58;j++)
            {   
                if (i!=j)
                {
                    putchar(i);
                    putchar(j);
                    if (i!=56 || j!=57)
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
