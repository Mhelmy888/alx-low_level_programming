#include <stdio.h>
#include <inttypes.h>

/**
 * main - Entry point
 *
 * Description: Prints the size of various types
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    printf("Size of char: %" PRIuPTR " byte(s)\n", sizeof(char));
    printf("Size of short: %" PRIuPTR " byte(s)\n", sizeof(short));
    printf("Size of int: %" PRIuPTR " byte(s)\n", sizeof(int));
    printf("Size of long: %" PRIuPTR " byte(s)\n", sizeof(long));
    printf("Size of long long: %" PRIuPTR " byte(s)\n", sizeof(long long));
    printf("Size of float: %" PRIuPTR " byte(s)\n", sizeof(float));
    printf("Size of double: %" PRIuPTR " byte(s)\n", sizeof(double));
    printf("Size of long double: %" PRIuPTR " byte(s)\n", sizeof(long double));

    return 0;
}
