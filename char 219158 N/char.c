#include <stdio.h>

int main()
{
    int ascii;
    char result, input;

    scanf("%c", &input);
    ascii = (int)input;

    if (ascii >= 97 && ascii <= 122)
    {
        result = ascii - 32;
        printf("%c", result);
    }
    else if (ascii >= 65 && ascii <= 90)
    {
        result = ascii + 32;
        printf("%c", result);
    }

    return 0;
}