#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints numbers of base 16 in lowercase.
 * Then, it prints a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	num = 'a';
	while (num <= 'f')
	{
		putchar(num);
		num++;
	}

	putchar('\n');
	return (0);
}

