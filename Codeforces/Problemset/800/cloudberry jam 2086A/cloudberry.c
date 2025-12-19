#include <stdio.h>

int main()
{
    int limit, input, result;
    scanf("%d", &limit);

    for (int i = 1; i <= limit; i++)
    {
        scanf("%d", &input);
        result = input * 2;
        printf("%d\n", result);
    }
    return 0;
}