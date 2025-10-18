#include <stdio.h>

int main()
{
    char input;
    scanf("%c", &input);

    if ((int)input >= 48 && (int)input <= 57)
    {
        printf("IS DIGIT");
    }
    else if ((int)input >= 97 && (int)input <= 122)
    {
        printf("ALPHA\nIS SMALL");
    }
    else
    {
        printf("ALPHA\nIS CAPITAL");
    }
    return 0;
}