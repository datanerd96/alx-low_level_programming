#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all single-digit numbers of base 10 from 0 followed by a
 * newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int num = '0';

    while (num <= '9')
    {
        putchar(num);
        putchar('\n');
        num++;
    }
    return (0);
}

