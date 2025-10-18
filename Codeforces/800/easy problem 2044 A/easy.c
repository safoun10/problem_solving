#include <stdio.h>

int main()
{
    int limit, input;
    scanf("%d", &limit);

    for (int i = 1; i <= limit; i++)
    {
        scanf("%d", &input);
        printf("%d\n", input - 1);
    }

    return 0;
}