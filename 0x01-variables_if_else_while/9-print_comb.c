#include <stdio.h>

/* betty style doc for functions with long descriptions */
/**
 * main - Entry point, prints all possible combinations of single-digit numbers
 *
 * Description: Prints all single-digit numbers separated by ", " in ascending order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number = 0;

	while (number < 10)
	{
		putchar(number + '0');

		if (number < 9)
		{
			putchar(',');
			putchar(' ');
		}

		number++;
	}

	putchar('\n');

	return (0);
}
