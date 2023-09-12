#include "main.h"
#include <stdio.h>

int main(void)
{
    FILE *file;
    int c;

    file = fopen("putchar", "r"); // Open the "putchar" file for reading

    if (file == NULL)
    {
        perror("Error opening file");
        return (1);
    }

    while ((c = fgetc(file)) != EOF)
    {
        _putchar(c); // Print each character from the file
    }

    fclose(file); // Close the file
    _putchar('\n'); // Print a new line
    return (0);
}
