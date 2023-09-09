#include <stdio.h>

/**
 * main - Entry point, prints lowercase alphabet in reverse
 *
 * Description: Prints the lowercase alphabet in reverse order, followed by a newline.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char letter = 'z';

    while (letter >= 'a')
    {
        putchar(letter);
        letter--;
    }

    putchar('\n');

    return (0);
}
