#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints all possible different combinations of two digits.
 * Return: Always 0 (Success)
 */
int main(void)
{
        int i, j, k;

        for(i=48;i<58;i++)
        {
            for(j=48;j<58;j++)
            {   
                for(k=48;k<58;k++)
                { 
                    if (i<j && j<k)
                    {
                        putchar(i);
                        putchar(j);
                        putchar(k);
                        if (i!=55 || j!=56)
                        {
                            putchar(',');
                            putchar(' '); 
                        }
                    }
                }
            }
        }

        putchar('\n');
        return (0);
}