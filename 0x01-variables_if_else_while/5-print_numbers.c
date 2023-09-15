#include <stdio.h>

/**
 * main - Prints all single digit numbers of base 10 starting from 0.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char num;

    for (num = '0'; num <= '9'; num++)
        putchar(num);

    putchar('\n');

    return (0);
}

