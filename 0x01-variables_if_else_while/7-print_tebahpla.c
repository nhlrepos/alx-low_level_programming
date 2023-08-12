#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
        char alpha[26]="abcdefghijklmnopqrstuvwxyz";
        int i;
        for(i=25;i>0;i--)
        {
                putchar(alpha[i]);
        }

        putchar('\n');
        return (0);
}
