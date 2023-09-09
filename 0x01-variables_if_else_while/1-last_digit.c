#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	/* Initialize random number generator with a seed */
	srand(time(0));

	/* Generate a random number between INT_MIN and INT_MAX */
	n = rand() - RAND_MAX / 2;

	/* Get the last digit of n */
	int lastDigit = n % 10;

	/* Print the result */
	printf("Last digit of %d is %d", n, lastDigit);

	if (lastDigit > 5)
		printf(" and is greater than 5\n");
	else if (lastDigit == 0)
		printf(" and is 0\n");
	else
		printf(" and is less than 6 and not 0\n");

	return (0);
}
