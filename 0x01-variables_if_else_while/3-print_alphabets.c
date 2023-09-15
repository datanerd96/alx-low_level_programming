#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase and then in uppercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char ch = 'a';
    char offset;

    while (ch <= 'z' || ch <= 'Z')
    {
        if (ch <= 'z')
        {
            offset = 0;
        }
        else
        {
            offset = 'A' - 'a';
        }
        putchar(ch - offset);
        if (ch == 'z')
        {
            ch = 'A';
        }
        else
        {
            ch++;
        }
    }

    putchar('\n');

    return (0);
}

