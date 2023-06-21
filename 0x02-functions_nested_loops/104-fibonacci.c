#include <stdio.h>

void print_fibonacci(int n)
{
    int a = 1, b = 2, i;

    printf("%d, %d", a, b); // Print the first two Fibonacci numbers

    for (i = 3; i <= n; i++)
    {
        int c = a + b;
        printf(", %d", c);
        a = b;
        b = c;
    }

    printf("\n");
}

int main(void)
{
    print_fibonacci(98);
    return 0;
}
