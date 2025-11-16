#include <stdio.h>
#include <string.h>

int main()
{
    char text[10001] = {0};

    for (int i = 0; i < 3; i++)
    {
        fgets(text, 10001, stdin);
        printf("%s", text);
    }

    return 0;
}