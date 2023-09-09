#include <stdio.h>

/**
 * main - Entry point, prints single-digit numbers in base 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number = '0';

	while (number <= '9')
	{
		write(1, &number, 1);
		number++;
	}

	write(1, "\n", 1);

	return (0);
}
