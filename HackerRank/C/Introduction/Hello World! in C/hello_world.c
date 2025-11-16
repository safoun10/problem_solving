#include <stdio.h>
#include <string.h>

int main()
{
    printf("Hello, World!\n");
    char text[1001] = {0};
    fgets(text, 1001, stdin);
    printf("%s", text);

    return 0;
}