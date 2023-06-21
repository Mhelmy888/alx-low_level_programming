#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    unsigned long int fib1 = 1;
    unsigned long int fib2 = 2;
    unsigned long int fib3;
    int count;
    unsigned long int sum = 2; // Start with sum = 2 since fib2 is even and less than 4,000,000

    printf("%lu, %lu", fib1, fib2);

    for (count = 3; count <= 98; count++)
    {
        fib3 = fib1 + fib2;
        if (fib3 % 2 == 0 && fib3 <= 4000000)
        {
            sum += fib3;
        }
        printf(", %lu", fib3);
        fib1 = fib2;
        fib2 = fib3;
    }

    printf("\nSum of even-valued terms: %lu\n", sum);

    return (0);
}
