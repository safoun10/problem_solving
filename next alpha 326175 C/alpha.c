#include <stdio.h>

int main()
{
    char character;
    scanf("%c", &character);

    if (character == 'z')
    {
        printf("a");
    }
    else
    {
        character = (int)character + 1;
        printf("%c", character);
    }

    return 0;
}