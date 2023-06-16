#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print alphabet in lowercase, then in uppercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char ch;
        char CH;

        ch = 'a';
        while (ch <= 'z')
        {
                putchar(ch);
                ch++;
        }

        CH = 'A';
        while (CH <= 'Z')
        {
                putchar(CH);
                CH++;
        }

        putchar('\n');

        return (0);
}
