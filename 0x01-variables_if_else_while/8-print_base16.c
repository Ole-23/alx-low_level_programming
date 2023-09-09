#include <stdio.h>

/**
 * main - Entry point, prints lowercase hexadecimal numbers
 *
 * Description: Prints all the lowercase hexadecimal numbers (0-9 and a-f),
 *              followed by a newline character.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char hex_digit = '0';

	while (hex_digit <= '9')
	{
		putchar(hex_digit);
		hex_digit++;
	}

	hex_digit = 'a';

	while (hex_digit <= 'f')
	{
		putchar(hex_digit);
		hex_digit++;
	}

	putchar('\n');

	return (0);
}
