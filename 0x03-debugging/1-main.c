#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
    int i;
    printf("Infinite loop incoming :(\n");
    i = 0;

    while (i < 10)
    {
        printf("%d ", i);
        i++;
    }

    printf("\nInfinite loop avoided! \\o/\n");
    return (0);
}
