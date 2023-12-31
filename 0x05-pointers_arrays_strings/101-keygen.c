#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 15

int main(void)
{
    char password[PASSWORD_LENGTH + 1];
    int i, ascii;

    srand(time(NULL));

    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        do
        {
            ascii = rand() % 94 + 33;
        } while (!((ascii >= 33 && ascii <= 47) || (ascii >= 65 && ascii <= 90) || (ascii >= 97 && ascii <= 122)));

        password[i] = (char)ascii;
    }

    password[PASSWORD_LENGTH] = '\0';

    printf("%s\n", password);

    return 0;
}
